#include "WeatherModel.h"
#include <algorithm>
#include <cctype>
bool WeatherModel::findWeather(const std::string& city, Weather& result) const {
    std::string name = city;
    std::transform(name.begin(), name.end(), name.begin(),
        [](unsigned char ch) {
            return static_cast<char>(std::tolower(ch));
        });

    if (name == "kyiv") {
        result = Weather("Kyiv", 15, "Cloudy");
    }
    else if (name == "lviv") {
        result = Weather("Lviv", 12, "Rainy");
    }
    else if (name == "kolomyia") {
        result = Weather("Kolomyia", 14, "Sunny");
    }
    else if (name == "odesa") {
        result = Weather("Odesa", 18, "Sunny");
    }
    else {
        return false;
    }
    return true;
}
