// Fill out your copyright notice in the Description page of Project Settings.


#include "FillGrid.h"

void UFillGrid::UpdateContent(FFillGridData FillGridData, int32 NewContentCount, TArray<UUserWidget*>& OutArray){

	//set variables
	GridData.ContentCount = NewContentCount;
	GridData.ColumnsCount = FillGridData.ColumnsCount;
	GridData.ContainedType = FillGridData.ContainedType;


	AddAndPoolChildren();
	ManageGridLayout(OutArray);
}

void UFillGrid::AddAndPoolChildren() {

	//clear excess children
	int j = GetChildrenCount();
	for (int i = j - 1; i >= 0; i--) {
		if (i < GridData.ContentCount)
			break;
		UWidget* child = GetChildAt(i);
		if (child) {
			ChildPool.Add(child);
			child->RemoveFromParent();
		}
	}

	//re-add pooled widgets
	for (int i = j; i < GridData.ContentCount; i++) {

		if (ChildPool.Num() > 0) {
			UWidget* widget = ChildPool.Last();
			if (widget) {
				AddChild(widget);
				ChildPool.RemoveAt(ChildPool.Num() - 1);
			}
		}
		else break;
	}

	//children count could have been updated from pool
	j = GetChildrenCount();

	//Create new widgets if pool has been emptied
	for (int i = j; i < GridData.ContentCount; i++) {

		if (GridData.ContainedType == nullptr) {
			UE_LOG(LogTemp, Warning, TEXT("Missing fillgrid contain type, probably missing from the instanced struct"))
				break;
		}
		UUserWidget* widget = CreateWidget(this, GridData.ContainedType);
		AddChild(widget);
	}
}


void UFillGrid::ManageGridLayout(TArray<UUserWidget*>& OutArray) {

	OutArray.Empty();
	int i = 0;
	for (UWidget* temp : GetAllChildren())
	{
		UUniformGridSlot* Widget = UWidgetLayoutLibrary::SlotAsUniformGridSlot(temp);

		Widget->SetVerticalAlignment(VAlign_Center);
		Widget->SetHorizontalAlignment(HAlign_Center);

		//Enough children to split grid into columns?
		if (GetChildrenCount() > GridData.NrOfRowUntilColumnSplit) {
			if (GridData.ColumnsCount == 0)
				break;

			Widget->SetRow(i / GridData.ColumnsCount);
			//widgets per row
			Widget->SetColumn(i % GridData.ColumnsCount);
		}
		else{
			Widget->SetRow(i);
			//always atleast 1 column
			Widget->SetColumn(0);
		}
		//someshits wrong heeeere
		UUserWidget* casted = (UUserWidget*)temp;
		if (casted != nullptr) 
			OutArray.Add(casted);		



		i++;
	}
}
