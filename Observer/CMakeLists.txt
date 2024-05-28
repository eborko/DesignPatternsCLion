cmake_minimum_required(VERSION 3.28)
project(Observer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Observer ObserverMain.cpp
        WeatherStation.cpp
        CurrentWeatherWidget.cpp
)

target_sources(Observer PRIVATE
        WeatherStation.h
        Subject.h
        Observer.h
        Presenter.h
        CurrentWeatherWidget.h
)