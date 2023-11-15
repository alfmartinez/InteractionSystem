// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InteractionInterface.h"
#include "InteractionSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionDelegate, TScriptInterface<IInteractable>, Interactable, AActor*, Instigator);

/**
 * 
 */
UCLASS()
class INTERACTIONSYSTEM_API UInteractionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Interaction Subsystem")
	void BroadcastInteractionStarted(TScriptInterface<IInteractable> Interactable, AActor* Instigator);

	UFUNCTION(BlueprintCallable, Category = "Interaction Subsystem", DisplayName="Broadcast Interaction Completed")
	void BroadcastInteractionStopped(TScriptInterface<IInteractable> Interactable, AActor* Instigator);

	UFUNCTION(BlueprintCallable, Category = InteractionSubsystem)
	void BroadcastInteractionAborted(TScriptInterface<IInteractable> Interactable, AActor* Instigator);

public:
	UPROPERTY(BlueprintAssignable, Category = "Interaction Subsystem")
	FOnInteractionDelegate OnInteractionStarted;

	UPROPERTY(BlueprintAssignable, Category = "Interaction Subsystem")
	FOnInteractionDelegate OnInteractionStopped;


	UPROPERTY(BlueprintAssignable, Category = "Interaction Subsystem")
	FOnInteractionDelegate OnInteractionAborted;
};
