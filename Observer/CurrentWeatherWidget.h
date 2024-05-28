//
// Created by borko on 5/28/2024.
//

#ifndef CURRENTWEATHERWIDGET_H
#define CURRENTWEATHERWIDGET_H
#include "Observer.h"
#include "Presenter.h"
#include "WeatherStation.h"


namespace observer
{
    class CurrentWeatherWidget : public Observer, public Presenter {
    public:
        CurrentWeatherWidget(WeatherStation* weather_station);
        ~CurrentWeatherWidget() = default;
        void Update() override;
        void Display() override;

    private:
        WeatherStation* m_weatherStation;
        double m_temperature;
        double m_pressure;
    };
}




#endif //CURRENTWEATHERWIDGET_H
