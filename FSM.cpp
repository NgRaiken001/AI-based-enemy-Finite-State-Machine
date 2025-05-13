// AIEnemy.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIEnemy.generated.h"

UCLASS()
class YOURGAME_API AAIEnemy : public ACharacter {
    GENERATED_BODY()

public:
    AAIEnemy();

protected:
    virtual void BeginPlay() override;

public: 
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(EditAnywhere, Category = "AI")
    class UBehaviorTree* AIBehaviorTree;
};

// AIEnemy.cpp
#include "AIEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

AAIEnemy::AAIEnemy() {
    PrimaryActorTick.bCanEverTick = true;
}

void AAIEnemy::BeginPlay() {
    Super::BeginPlay();
    
    AAIController* AIController = Cast<AAIController>(GetController());
    if (AIController && AIBehaviorTree) {
        AIController->RunBehaviorTree(AIBehaviorTree);
    }
}

void AAIEnemy::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
}
