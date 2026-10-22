#pragma once
#include "Weather.h"
#include <string>
class WeatherView {
public:
    void showMenu() const;
    void showWeather(const Weather& weather) const;
    void showError(const std::string& message) const;
};
