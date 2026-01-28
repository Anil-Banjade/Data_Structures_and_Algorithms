#include <iostream>
#include <cmath>

class Cartesian;

class Polar {
public:
    int r, theta;

    Polar(int a, int b) : r(a), theta(b) {}

    Polar(Cartesian &q);

    void display() {
        std::cout << "Polar is " << r << " " << theta << "\n";
    }
};

class Cartesian {
public:
    int x, y;

    Cartesian(int a, int b) : x(a), y(b) {}

    Cartesian(Polar &p);

    void display() {
        std::cout << "Cartesian is " << x << " " << y << "\n";
    }
};

Cartesian::Cartesian(Polar &p) {
    // Convert Polar to Cartesian
    x = p.r * cos(p.theta * M_PI / 180);
    y = p.r * sin(p.theta * M_PI / 180);
}

Polar::Polar(Cartesian &q) {
    // Convert Cartesian to Polar
    r = sqrt(q.x * q.x + q.y * q.y);
    theta = atan2(q.y, q.x) * 180 / M_PI; // Convert radians to degrees
}

int main() {
    Polar p1(3, 60); // Polar coordinates
    Cartesian c2(1, 2); // Cartesian coordinates

    Polar p3(c2); // Convert Cartesian to Polar
    Cartesian c4(p1); // Convert Polar to Cartesian

    p3.display(); // Display Polar coordinates
    c4.display(); // Display Cartesian coordinates

    return 0;
}