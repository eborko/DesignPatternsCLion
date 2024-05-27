//
// Created by borko on 5/27/2024.
//

#ifndef SIMPLEQUACK_H
#define SIMPLEQUACK_H
#include "QuackBehavior.h"

namespace strategy {

class SimpleQuack final : public  QuackBehavior {
public:
    ~SimpleQuack() = default;
    SimpleQuack() = default;
    void PerformQuack() override;
};

} // strategy

#endif //SIMPLEQUACK_H
