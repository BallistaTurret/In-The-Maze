// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "StatuePawn.generated.h"

UCLASS()
class IN_THE_MAZE_API AStatuePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AStatuePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
