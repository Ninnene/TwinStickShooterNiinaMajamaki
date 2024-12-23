// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBaseC.h"

// Sets default values
ACharacterBaseC::ACharacterBaseC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterBaseC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterBaseC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBaseC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//implement Calculate Health

void ACharacterBaseC::CalculateHealth(float delta)
{
	health += delta;
	CalculateDeath();
}

//Yimplement CalculateDeath
void ACharacterBaseC::CalculateDeath()
{
	if (health <= 0)
		isDead = true;
	else
	{
		isDead = false;
	}
}


//implement propertychanges

#if WITH_EDITOR
void ACharacterBaseC::PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent)
{
	isDead = false;
	health = 100;

	Super::PostEditChangeProperty(propertyChangedEvent);
	CalculateDeath();
}
#endif