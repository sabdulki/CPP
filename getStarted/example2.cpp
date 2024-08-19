#include <iostream>
#include <string>

class Car {
public:
    int speed;
    std::string color;

    void drive() { std::cout << "Driving at " << speed << " km/h" << std::endl; }
    void stop() { std::cout << "Car stopped" << std::endl; }
};

class Point {
private:
    int x, y;

public:
    Point(int a, int b) : x(a), y(b) {} // Initialization list

    void display() const { std::cout << "Point(" << x << ", " << y << ")" << std::endl; }
};

void CarTest()
{
    Car myCar;
    int speed;
    std::cout << "enter speed: ";
    std::cin >> speed;
    myCar.speed = speed;
    myCar.color = "Red";
    myCar.drive();
    myCar.stop();
}

void PointTest()
{
    Point p(10, 20);
    p.display();
}

int main() 
{
    // CarTest();
    PointTest();
}