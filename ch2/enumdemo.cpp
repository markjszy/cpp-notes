#include <iostream>

enum class TrafficLight { red, yellow, green };

int main() {
    TrafficLight t { TrafficLight::red };

    switch (t) {
        case TrafficLight::green:
            std::cout << "Go!\n";
            break;
        case TrafficLight::yellow:
            std::cout << "Slow down!\n";
            break;
        case TrafficLight::red:
            std::cout << "Stop!\n";
            break;
        default:
            std::cout << "Not sure...\n";
    }

    return 0;
}