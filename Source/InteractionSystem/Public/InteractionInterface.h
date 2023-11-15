// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionInterface.generated.h"

UINTERFACE(BlueprintType, Blueprintable)
class INTERACTIONSYSTEM_API UInteractable : public UInterface {
	GENERATED_BODY()
};

class INTERACTIONSYSTEM_API IInteractable {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interactable")
	void StartInteraction(AActor* Instigator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interactable", DisplayName="Complete Interaction")
	void StopInteraction(AActor* Instigator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Interactable)
	void AbortInteraction(AActor* Instigator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interactable")
	void Activate();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interactable")
	void Deactivate();


};
