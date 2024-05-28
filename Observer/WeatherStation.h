//
// Created by borko on 5/27/2024.
//

#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H
#include <set>

#include "Observer.h"
#include "Subject.h"

namespace observer {
    class WeatherStation : Subject {
    public:
        ~WeatherStation() = default;
        WeatherStation();

        void RegisterObserver(Observer* observer) override;
        void RemoveObserver(Observer* observer) override;
        void NotifyObservers() override;
        void SetTemperature(double temperature);
        double GetTemperature() const;
        void SetPressure(double pressure);
        double GetPressure() const;
    private:
        std::set<Observer*> m_observers;
        double m_pressure;
        double m_temperature;
    };
} // Observer

#endif //WEATHERSTATION_H
