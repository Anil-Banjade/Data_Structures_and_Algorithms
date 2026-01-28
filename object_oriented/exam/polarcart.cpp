#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>

class Cartesian;

class Polar {
public:
    int r;
    int theta;

    Polar(int a, int b) : r(a), theta(b) {}

    Polar(Cartesian& c);

    void display() {
        std::cout << "r: " << r << "\n";
        std::cout << "theta: " << theta << "\n";
    }
};

class Cartesian {
public:
    int x, y;

    Cartesian(int a, int b) : x(a), y(b) {}

    Cartesian(Polar& p);

    void display() {
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n";
    }
};

Polar::Polar(Cartesian& c) {
    r = sqrt(pow(c.x, 2) + pow(c.y, 2));
    theta = atan2(c.y, c.x);
}

Cartesian::Cartesian(Polar& p) {
    x = p.r * cos(p.theta);
    y = p.r * sin(p.theta);
}

int main() {
    Cartesian c(3, 5);
    Polar p(10, 70);
    p = c;
    c=p;
    p.display();
    c.display();

    return 0;
}
