// Fill out your copyright notice in the Description page of Project Settings.

#include "TargetScripting.h"
#include "Engine/World.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UTargetScripting::UTargetScripting()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}




// Called when the game starts
void UTargetScripting::BeginPlay()
{
	Super::BeginPlay();
	owner = GetOwner();
	triggerType = GetWorld()->GetFirstPlayerController()->GetPawn();
	// ...
	
}

void UTargetScripting::PopOut()
{
	if (doesFlip)
	{
		FRotator newRotation = FRotator(standingAngle, 0.0f, 0.0f);
		owner->SetActorRotation(newRotation);
	}
	else if (doesSlide)
	{
		//FTransform newTransformation = FTransform()
	}
}

void UTargetScripting::PopBack()
{
	if (doesFlip)
	{
		FRotator newRotation = FRotator(downAngle, 0.0f, 0.0f);
		owner->SetActorRotation(newRotation);
	}
	else if (doesSlide)
	{

	}
}

// Called every frame
void UTargetScripting::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (targetTrigger && targetTrigger->IsOverlappingActor(triggerType))
	{
		PopOut();
		timer = GetWorld()->GetTimeSeconds();
	}
	if (timer + upTime<GetWorld()->GetTimeSeconds())
	{
		PopBack();
	}
	// ...
}

