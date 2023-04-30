// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCart.h"

// Sets default values
AMyCart::AMyCart()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCart::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

