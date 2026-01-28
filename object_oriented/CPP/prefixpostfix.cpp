#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 5 };
    std::cout << x << ' ' << y << '\n';
    std::cout << ++x << ' ' << --y << '\n'; // prefix
    std::cout << x << ' ' << y << '\n';
    std::cout << x++ << ' ' << y-- << '\n'; // postfix
    std::cout << x << ' ' << y << '\n';

    return 0;
}

/* On the 8th line, we do a prefix increment and decrement. On this line, x and y are incremented/decremented before their values are sent to std::cout, so we see their updated values reflected by std::cout.

On the 10th line, we do a postfix increment and decrement. On this line, the copy of x and y (with the pre-incremented and pre-decremented values) are what is sent to std::cout, so we don’t see the increment and decrement reflected here. Those changes don’t show up until the next line, when x and y are evaluated again.

*/
