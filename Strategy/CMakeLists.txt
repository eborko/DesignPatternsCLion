cmake_minimum_required(VERSION 3.28)
project(Strategy)

set(CMAKE_CXX_STANDARD 23)

include_directories(FlyBehaviors)
include_directories(QuackBehaviors)
include_directories(Core)

add_executable(Strategy StrategyMain.cpp
        Core/Duck.cpp
        FlyBehaviors/FlyWithWings.cpp
        QuackBehaviors/SimpleQuack.cpp
)

target_sources(Strategy PRIVATE
        Core/Duck.h
        FlyBehaviors/FlyBehavior.h
        FlyBehaviors/FlyWithWings.h
        QuackBehaviors/QuackBehavior.h
        QuackBehaviors/SimpleQuack.h
)