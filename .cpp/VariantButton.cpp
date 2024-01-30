
#include "VariantButton.h"

void UVariantButton::OnClickDelegate()
{
	ClickedDelegate.Broadcast(Index);
}

void UVariantButton::PostLoad()
{
	Super::PostLoad();

	OnClicked.AddUniqueDynamic(this, &UVariantButton::OnClickDelegate);
}




//TODO Make overload function with/without variantindex instead of -1 index
//negative index for the thumbnail of the whole set
void UVariantButton::NewIconFromVariantIndex(int32 SetIndex, int32 VariantIndex, ULevelVariantSets* VariantSets)
{
	UTexture2D* NewButtonTexture = nullptr;

	if (VariantIndex >= 0) 
		NewButtonTexture = VariantSets->GetVariantSet(SetIndex)->GetVariant(VariantIndex)->GetThumbnail();
	else 
		NewButtonTexture = VariantSets->GetVariantSet(SetIndex)->GetThumbnail();


	if (NewButtonTexture == nullptr) {
		//no thumbnail
		UE_LOG(LogTemp, Warning, TEXT("Missing Thumbnail"));
		return;
	}
 
	FSlateBrush Brush = GetStyle().Normal;
	Brush.SetResourceObject(NewButtonTexture);
	WidgetStyle.SetNormal(Brush);

}
