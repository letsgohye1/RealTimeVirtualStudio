// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Flower.generated.h"

UCLASS()
class EXHIBITION_API AFlower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	// ?? 采 Instanced Static Mesh
	UPROPERTY(VisibleAnywhere)
	TArray<UInstancedStaticMeshComponent*> FlowerISMs;



	// 积己 俺荐
	UPROPERTY(EditAnywhere, Category = "Spawn")
	int32 MinFlowerCount = 2;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	int32 MaxFlowerCount = 5;


	// 采 乔快扁
	UFUNCTION(BlueprintCallable)
	void SpawnRandomFlowers();

};
