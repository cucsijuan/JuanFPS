// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JFPSWeapon.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup = (Weapons), meta = (BlueprintSpawnableComponent))
class JUANFPS_API AJFPSWeapon : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AJFPSWeapon();
	FName const& GetAttachSocketName();

protected:
	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	FName SocketName;	
};
