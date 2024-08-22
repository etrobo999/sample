#pragma once
#include "Drive.h"
#include "Scenario2.h"

class DoubleLoopScenario : public Scenario2 {
public:
    DoubleLoopScenario();
    void execute() override;  // Execute double loop scenario
};