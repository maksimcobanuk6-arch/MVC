#include "Weather.h"
Weather::Weather(const std::string& city, int temperature, const std::string& condition)
    : city(city), temperature(temperature), condition(condition) {
}
std::string Weather::getCity() const {
    return city;
}
int Weather::getTemperature() const {
    return temperature;
}
std::string Weather::getCondition() const {
    return condition;
}