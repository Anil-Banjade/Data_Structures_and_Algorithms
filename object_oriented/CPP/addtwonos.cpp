#include<iostream>

int main(){

  int x,y;
  std::cout<<"Enter an integer:\n ";
  std::cin>>x;
  std::cout<<"Enter another integer:\n ";
  std::cin>>y;

  std::cout<<x; std::cout<<" + "; std::cout<<y;std::cout<< " = "; std::cout<<x+y;

  std::cout<<x; std::cout<< " - "; std::cout<<y; std::cout<<" = "; std::cout<<x-y;

  return 0;

}


    
/*

  #include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << x << " + " << y << " is " << x + y << ".\n";
	std::cout << x << " - " << y << " is " << x - y << ".\n";

	return 0;
}

 */
