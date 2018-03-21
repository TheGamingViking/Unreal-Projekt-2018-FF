// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "DoorOpener.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREAL_PROJEKT_2018_API UDoorOpener : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorOpener();
	UPROPERTY(EditAnywhere)
		float openAngle = 90.0f;
	UPROPERTY(EditAnywhere)
		float closedAngle = 0.0f;
	UPROPERTY(EditAnywhere)
		ATriggerVolume* pressurePlate;
	AActor* owner;
	void UDoorOpener::Open();
	void UDoorOpener::Close();
	UPROPERTY(VisibleAnywhere)
		AActor* triggerType;
	float timer;
	UPROPERTY(EditAnywhere)
		float delay = 4.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
