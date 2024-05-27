
//
// Created by borko on 5/27/2024.
//

#include "Duck.h"
#include "FlyWithWings.h"
#include "SimpleQuack.h"

using namespace strategy;
int main()
{
    FlyBehavior* fb = new FlyWithWings();
    QuackBehavior* qb = new SimpleQuack();
    Duck* myDuck = new Duck(fb, qb);
    myDuck->Fly();
    myDuck->Quack();

    delete myDuck;
    return 0;
}
