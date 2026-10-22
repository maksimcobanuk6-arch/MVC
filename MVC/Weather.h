#pragma once
#include <string>
class Weather {
private:
    std::string city;
    int temperature;
    std::string condition;
public:
    Weather(const std::string& city, int temperature, const std::string& condition);
    std::string getCity() const;
    int getTemperature() const;
    std::string getCondition() const;
};
