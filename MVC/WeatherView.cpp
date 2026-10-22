#include "WeatherView.h"
#include <iostream>
void WeatherView::showMenu() const {
    std::cout << "\n=== WEATHER (MVC) ===\n";
    std::cout << "1. Find weather\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option: ";
}
void WeatherView::showWeather(const Weather& weather) const {
    std::cout << "\nCity: " << weather.getCity() << "\n";
    std::cout << "Temperature: " << weather.getTemperature() << " C\n";
    std::cout << "Condition: " << weather.getCondition() << "\n";
    std::cout << "(Demo data, not current weather)\n";
}
void WeatherView::showError(const std::string& message) const {
    std::cout << "Error: " << message << "\n";
}
