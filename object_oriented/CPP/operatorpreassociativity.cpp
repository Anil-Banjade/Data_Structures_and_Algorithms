#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";

    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    std::cout << getValue() + (getValue() * getValue()); // a + (b * c)
    return 0;
}

/*

  If you run this program and enter inputs 1, 2, and 3, you might assume that this program would calculate 1 + (2 * 3) and print 7. But that is making the assumption that the calls to getValue() will evaluate in left-to-right order. The compiler may choose a different order. For example, if the compiler chose a right-to-left order instead, the program would calculate 3 + (2 * 1), which would print 5 for the same set of inputs.
*/


//The above program can be made unambiguous by making each function call a separate statement:


#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";

    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int a{ getValue() }; // will execute first
    int b{ getValue() }; // will execute second
    int c{ getValue() }; // will execute third

    std::cout << a + (b * c); // order of eval doesn't matter now

    return 0;
}
