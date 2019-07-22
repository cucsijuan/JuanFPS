#include "JFPSWeapon.h"
#include "Components/SkeletalMeshComponent.h"


FName const& AJFPSWeapon::GetAttachSocketName()
{
	return SocketName;
}

AJFPSWeapon::AJFPSWeapon()
{
	RootComponent = CreateDefaultSubobject <USceneComponent>(TEXT("Root"));
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetupAttachment(RootComponent);
}
