#include "WeatherController.h"
#include <iostream>
#include <string>
void WeatherController::run() {
    // Вибір міста користувачем
    std::string choice;
    while (true) {
        view.showMenu();

        if (!std::getline(std::cin, choice)) {
            break;
        }

        if (choice == "0") {
            std::cout << "Goodbye!\n";
            break;
        }

        if (choice != "1") {
            view.showError("Choose 1 or 0.");
            continue;
        }
        std::cout << "Enter city (Kyiv, Lviv, Kolomyia, Odesa): ";
        std::string city;
        if (!std::getline(std::cin, city)) {
            break;
        }

        if (city.empty()) {
            view.showError("City cannot be empty.");
            continue;
        }
        Weather weather("", 0, "");

        if (model.findWeather(city, weather)) {
            view.showWeather(weather);
        }
        else {
            view.showError("City not found.");
        }
    }
}
