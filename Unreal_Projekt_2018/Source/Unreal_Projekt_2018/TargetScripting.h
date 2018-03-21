// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "TargetScripting.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREAL_PROJEKT_2018_API UTargetScripting : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTargetScripting();
	UPROPERTY(EditAnywhere)
		float standingAngle = 90.0f;
	UPROPERTY(EditAnywhere)
		float downAngle = 0.0f;
	UPROPERTY(EditAnywhere)
		bool doesFlip = true;
	UPROPERTY(EditAnywhere)
		bool doesSlide = false;
	UPROPERTY(EditAnywhere)
		ATriggerVolume* targetTrigger;
	AActor* owner;
	void UTargetScripting::PopOut();
	void UTargetScripting::PopBack();
	UPROPERTY(VisibleAnywhere)
		AActor* triggerType;
	float timer;
	UPROPERTY(EditAnywhere)
		float upTime = 4.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
