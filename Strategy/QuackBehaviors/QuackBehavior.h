//
// Created by borko on 5/27/2024.
//

#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H
namespace strategy
{
    class QuackBehavior
    {
    public:
        virtual void PerformQuack() = 0;
    };
}

#endif //QUACKBEHAVIOR_H
