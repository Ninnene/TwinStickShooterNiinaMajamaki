// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBaseC.generated.h"

UCLASS(Blueprintable)
class TWINSTICKNM_API ACharacterBaseC : public ACharacter
{
	GENERATED_BODY()

public:
	//health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CharacterBaseC")
	float health = 100;

	// death
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "CharacterBaseC")
	bool isDead = false;

	//deth function
	virtual void CalculateDeath();

	//calculate health
	UFUNCTION(BlueprintCallable, Category = "CharacterBaseC")
	virtual void CalculateHealth(float delta);


#if WITH_EDITOR
	// editor centric code for property changes
	virtual void PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent) override;

#endif
public:
	// Sets default values for this character's properties
	ACharacterBaseC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
