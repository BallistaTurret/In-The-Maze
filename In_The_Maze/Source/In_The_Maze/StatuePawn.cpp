// Fill out your copyright notice in the Description page of Project Settings.

#include "StatuePawn.h"
#include <EngineGlobals.h>

// Sets default values
AStatuePawn::AStatuePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStatuePawn::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("HELLO THIS IS A TEST... %s"), *GetActorLocation().ToString());
}

// Called every frame
void AStatuePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStatuePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AStatuePawn::HelpPlayer()
{

}

void AStatuePawn::SpawnFinalClue()
{

}
