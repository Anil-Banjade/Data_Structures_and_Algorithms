#include <iostream>
#include <cmath>

class Cartesian;

class Polar {
public:
    int r;
    int theta;
    Polar(){}

    Polar(int a, int b) : r(a), theta(b) {}

    void display() {
        std::cout << "r: " << r << "\n";
        std::cout << "theta: " << theta << "\n";
    }

    operator Cartesian(); // Declare the conversion operator
};


class Cartesian {
public:
    int x, y;
    Cartesian(){}
    Cartesian(int a, int b) : x(a), y(b) {}

    void display() {
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n";
    }

    operator Polar(); // Declare the conversion operator
};

// Define the Polar to Cartesian conversion operator
Polar::operator Cartesian() {
    Cartesian temp;
    temp.x = r * cos(theta);
    temp.y = r * sin(theta);
    return temp;
}

// Define the Cartesian to Polar conversion operator
Cartesian::operator Polar() {
    Polar temp;
    temp.r = sqrt(pow(x, 2) + pow(y, 2));
    temp.theta = atan2(y, x);
    return temp;
}

int main() {
    Cartesian c(3, 5);
    Polar p(10, 70);
    p = c;
    p.display();

    Polar p2 = Cartesian(4, 3); // Testing Cartesian to Polar conversion
    p2.display();

    return 0;
}
