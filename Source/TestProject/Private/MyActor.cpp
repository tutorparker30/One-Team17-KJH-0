#include "MyActor.h"
#include "Kismet/KismetSystemLibrary.h"

AMyActor::AMyActor()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Source code written by a team number.")));
}
