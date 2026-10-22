#pragma once
#include "WeatherModel.h"
#include "WeatherView.h"
class WeatherController {
private:
    WeatherModel model;
    WeatherView view;
public:
    void run();
};
