
//
// Created by borko on 5/27/2024.
//

#include <iostream>

#include "CurrentWeatherWidget.h"
#include "WeatherStation.h"

using namespace observer;

int main()
{
    WeatherStation* weather_station = new WeatherStation();
    weather_station->SetPressure(1200);
    weather_station->SetTemperature(18);

    CurrentWeatherWidget* current_weather_widget = new CurrentWeatherWidget(weather_station);
    weather_station->RegisterObserver(current_weather_widget);
    current_weather_widget->Display();

    weather_station->SetPressure(1000);
    weather_station->SetTemperature(32);
    weather_station->NotifyObservers();

    int a;
    std::cin >> a;
    return 0;
}