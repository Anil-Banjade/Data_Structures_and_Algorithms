#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

    return 0;
}


//#ifndef is the opposite of #ifdef, in that it allows you to check whether an identifier has NOT been #defined yet.


#include <iostream>

int main()
{
#ifndef PRINT_BOB
    std::cout << "Bob\n";
#endif

    return 0;
}


//#ifdef PRINT_BOB and #ifndef PRINT_BOB, you’ll also see #if defined(PRINT_BOB) and #if !defined(PRINT_BOB)



//One more common use of conditional compilation involves using #if 0 to exclude a block of code from being compiled (as if it were inside a comment block):

// used also to comment out

//To temporarily re-enable code that has been wrapped in an #if 0, you can change the #if 0 to #if 1:


#include <iostream>

int main()
{
    std::cout << "Joe\n";

#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}



