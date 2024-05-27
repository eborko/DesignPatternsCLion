//
// Created by borko on 5/27/2024.
//

#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H
#include "FlyBehavior.h"

namespace strategy {

class FlyWithWings final : public FlyBehavior {
public:
    FlyWithWings() = default;
    ~FlyWithWings() = default;

    void PerformFly() override;
};

} // strategy

#endif //FLYWITHWINGS_H
