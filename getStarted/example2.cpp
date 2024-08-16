#include <iostream>
#include <string>

class Car {
public:
    int speed;
    std::string color;

    void drive() { std::cout << "Driving at " << speed << " km/h" << std::endl; }
    void stop() { std::cout << "Car stopped" << std::endl; }
};

int main() {
    Car myCar;
    int speed;
    std::cout << "enter speed: ";
    std::cin >> speed;
    myCar.speed = speed;
    myCar.color = "Red";
    myCar.drive();
    myCar.stop();
}