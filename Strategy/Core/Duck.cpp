//
// Created by borko on 5/27/2024.
//
#include "Duck.h"
#include <iostream>

namespace strategy
{
    Duck::Duck(FlyBehavior* fly_behavor, QuackBehavior* quack_behavior)
    {
        if (fly_behavor == nullptr || quack_behavior == nullptr)
        {
            std::cerr << "ArgumentNullException" << std::endl;
            return;
        }
        this->m_fly_behavior = fly_behavor;
        this->m_quackBehaviour = quack_behavior;
    }

    Duck::~Duck()
    {
        delete m_fly_behavior;
        delete m_quackBehaviour;
    }

    void Duck::Fly() const
    {
        m_fly_behavior->PerformFly();
    }

    void Duck::Quack() const
    {
        m_quackBehaviour->PerformQuack();
    }
}

