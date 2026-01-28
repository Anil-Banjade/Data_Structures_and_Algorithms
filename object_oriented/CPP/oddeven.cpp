#include <iostream>

int main(){
  std::cout<<"Enter a no:";
  int num{};
  std::cin>>num;

  if(num%2==0){
    std::cout<<num<<" is even\n";
  }else{
    std::cout<<num<<" is odd \n";

}

}


/* #include <iostream>

bool isEven(int x)
{
    // if x % 2 == 0, 2 divides evenly into our number, which means it must be an even number
    return (x % 2) == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (isEven(x))
        std::cout << x << " is even\n";
    else
        std::cout << x << " is odd\n";

    return 0;
}


*/
