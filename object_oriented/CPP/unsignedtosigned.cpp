#include <iostream>

int main()
{
    unsigned int u { 5 };
    int s { static_cast<int>(u) }; // return value of variable u as an int

    std::cout << s;
    return 0;
}

//The static_cast operator will produce undefined behavior if the value being converted doesn’t fit in range of the new type.
