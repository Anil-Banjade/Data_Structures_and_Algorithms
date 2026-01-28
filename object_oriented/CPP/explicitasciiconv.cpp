#include <iostream>

int main(){

  std::cout<<"Enter a single character:";
  char ch{};
  std::cin>>ch;

  std::cout<<"You entered "<<"\'"<<ch<<"\',"<<" which has ASCII code "<<static_cast<int>(ch);
  
  // std::cout<<"You entered "<<ch<<" which has ASCII code "<<static_cast<int>(ch); 
   
  
  
  return 0;
}

/*

  #include <iostream>

int main()
{
	std::cout << "Enter a single character: ";
	char c{};
	std::cin >> c;
	std::cout << "You entered '" << c << "', which has ASCII code " << static_cast<int>(c) << ".\n";

	return 0;
}

*/

