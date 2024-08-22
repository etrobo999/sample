#pragma once
#include "Drive.h"
#include "Scenario2.h"

class DoubleLoopScenario : public Scenario2 {
public:
    DoubleLoopScenario();
    void execute() override;  // Execute double loop scenario
    void update() override;   // Update scene number
    void markCompletion() override;  // 完了フラグを設定する関数
    bool checkCompletion() const override;  // シーンが完了したかを確認する
private:
    unsigned int sceneNo;  // シーン番号
    bool isComplete;  // シーンが完了したかどうかのフラグ
};