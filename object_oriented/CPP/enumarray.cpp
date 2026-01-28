#include <iostream>

enum class StudentNames
{
    kenny, // 0
    kyle, // 1
    stan, // 2
    butters, // 3
    cartman, // 4
    wendy, // 5
    max_students // 6
};

int main()
{
    int testScores[static_cast<int>(StudentNames::max_students)]{}; // allocate 6 integers
    testScores[static_cast<int>(StudentNames::stan)] = 76;
    std::cout<<testScores[static_cast<int>(StudentNames::stan)];
    return 0;
}

//However, doing this is somewhat of a pain, so it might be better to use a standard enum inside of a namespace:

/* namespace StudentNames
{
    enum StudentNames
    {
        kenny, // 0
        kyle, // 1
        stan, // 2
        butters, // 3
        cartman, // 4
        wendy, // 5
        max_students // 6
    };
}

int main()
{
    int testScores[StudentNames::max_students]{}; // allocate 6 integers
    testScores[StudentNames::stan] = 76;

    return 0;
}

*/
