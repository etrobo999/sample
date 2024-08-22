#pragma once
#include <Scenario2.h>
#include "Starter.h"
#include <memory>

// 前方宣言
class Scenario2;

class ScenarioList {
public:
    ScenarioList(const Starter* starter,);
    void executeScenario();  // Execute the current scenario
    void incrementScenarioNo();  // Increment the current scenario number
    void markCompletion();  // 完了フラグを設定する関数
    bool isCompleted() const;  // シーンが完了したかどうかを確認する

private:
    const Starter* mStarter;
    unsigned int scenarioNo;  // Current scenario number
    std::unique_ptr<Scenario2> scenarioBox;  // Current scenario instance
    bool scenarioComplete;  // シーンが完了したかどうかのフラグ
};