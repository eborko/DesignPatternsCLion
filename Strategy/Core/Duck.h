//
// Created by borko on 5/27/2024.
//

#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

namespace strategy {

    class Duck {
    public:
        ~Duck() = default;
        Duck(FlyBehavior* fly_behavor, QuackBehavior* quack_behavior);
        void Quack() const;
        void Fly() const;
    private:
        QuackBehavior* m_quackBehaviour;
        FlyBehavior* m_fly_behavior;
    };

} // strategy

#endif //DUCK_H
