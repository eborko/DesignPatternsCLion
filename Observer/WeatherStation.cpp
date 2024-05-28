//
// Created by borko on 5/27/2024.
//

#include "WeatherStation.h"

#include <set>

namespace observer {
    WeatherStation::WeatherStation()
    {
        this->m_observers = std::set<Observer*>();
    }

    void WeatherStation::NotifyObservers()
    {
        for (auto const observer : this->m_observers)
        {
            observer->Update();
        }
    }

    void WeatherStation::RegisterObserver(Observer* observer)
    {
        this->m_observers.insert(observer);
    }

    void WeatherStation::RemoveObserver(Observer* observer)
    {
        this->m_observers.erase(observer);
    }

    void WeatherStation::SetPressure(double pressure)
    {
        this->m_pressure = pressure;
    }

    double WeatherStation::GetPressure() const
    {
        return this->m_pressure;
    }

    double WeatherStation::GetTemperature() const
    {
        return this->m_temperature;
    }

    void WeatherStation::SetTemperature(double temperature)
    {
        this->m_temperature = temperature;
    }




} // Observer