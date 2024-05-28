//
// Created by borko on 5/28/2024.
//

#include "CurrentWeatherWidget.h"

#include <iostream>

namespace observer
{
    CurrentWeatherWidget::CurrentWeatherWidget(WeatherStation* weather_station)
    {
        this->m_weatherStation = weather_station;
        this->m_pressure = weather_station->GetPressure();
        this->m_temperature = weather_station->GetTemperature();
    }

    void CurrentWeatherWidget::Update()
    {
        this->m_pressure = m_weatherStation->GetPressure();
        this->m_temperature = m_weatherStation->GetTemperature();

        this->Display();
    }

    void CurrentWeatherWidget::Display()
    {
        std::cout << "Temperature: " << m_temperature << std::endl;
        std::cout << "Pressure: " << m_pressure << std::endl;
    }


}
