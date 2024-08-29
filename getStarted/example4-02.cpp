#include <iostream>

class Vector2D {
public:
    Vector2D(float x, float y) : x(x), y(y) {}

    // Overload the + operator
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }

    void print() const {
        std::cout << "Vector2D(" << x << ", " << y << ")" << std::endl;
    }

private:
    float x, y;
};

int main() {
    Vector2D v1(1.0f, 2.0f);
    Vector2D v2(3.0f, 4.0f);
    Vector2D v3 = v1 + v2;  // Uses overloaded + operator
    v3.print();             // Outputs: Vector2D(4, 6)
    return 0;
}
