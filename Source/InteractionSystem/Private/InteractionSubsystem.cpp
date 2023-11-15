// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionSubsystem.h"

void UInteractionSubsystem::BroadcastInteractionStarted(TScriptInterface<IInteractable> Interactable, AActor* Instigator)
{
	OnInteractionStarted.Broadcast(Interactable, Instigator);
}

void UInteractionSubsystem::BroadcastInteractionStopped(TScriptInterface<IInteractable> Interactable, AActor* Instigator)
{
	OnInteractionStopped.Broadcast(Interactable, Instigator);
}

void UInteractionSubsystem::BroadcastInteractionAborted(TScriptInterface<IInteractable> Interactable, AActor* Instigator)
{
	OnInteractionAborted.Broadcast(Interactable, Instigator);

}
