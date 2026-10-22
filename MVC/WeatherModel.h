#pragma once
#include "Weather.h"
#include <string>
class WeatherModel {
public:
    bool findWeather(const std::string& city, Weather& result) const;
};
