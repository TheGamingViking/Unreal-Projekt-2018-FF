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
	previousLocation = owner->GetActorLocation();
	// ...
	
}

void UTargetScripting::PopOut()
{
	if (doesFlip)
	{
		FRotator newRotation = FRotator(standingAngle, owner->GetActorRotation().Yaw, 0.0f);
		owner->SetActorRotation(newRotation);
	}
	if (doesSlide&&moveY)
	{
		newLocation = previousLocation;
		newLocation.Y += speed;
		owner->SetActorLocation(newLocation);
	}
	if (doesSlide&&moveX)
	{
		newLocation = previousLocation;
		newLocation.X += speed;
		owner->SetActorLocation(newLocation);
	}
}

void UTargetScripting::PopBack()
{
	if (doesFlip)
	{
		FRotator newRotation = FRotator(downAngle, owner->GetActorRotation().Yaw, owner->GetActorRotation().Roll);
		owner->SetActorRotation(newRotation);
	}
	else if (doesSlide)
	{
		owner->SetActorLocation(previousLocation);
	}
}

// Called every frame
void UTargetScripting::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (targetTrigger && targetTrigger->IsOverlappingActor(triggerType))
	{
		if (!hasBeenTriggerd)
		{
			timer = GetWorld()->GetTimeSeconds();
			hasBeenTriggerd = true;
		}
	}
	if (targetTrigger && targetTrigger->IsOverlappingActor(triggerType))
	{
		if (timer + triggerDelay > GetWorld()->GetTimeSeconds())
		{
			PopOut();
		}
		
	}

	if (hasBeenTriggerd)
	{
		if (timer + upTime+triggerDelay<GetWorld()->GetTimeSeconds())
		{
			PopBack();
		}
	}
}

