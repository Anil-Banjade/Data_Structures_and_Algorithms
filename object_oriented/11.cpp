#include <iostream>

class Vehicle{
  std::string color;
  int wheel;

public:
  void setColor(){
    color="white";
  }

  void setWheel(){
    wheel=7;
  }
  
  std::string getColor(){
    return color;
  }

  int getWheel(){
    return wheel;
      }
};

class SportsVehicle:public Vehicle{
   bool sportsMode;

  SportsVehicle(bool s):sportsMode(s){}
  void display(){
    std::cout<<"color: "<<getColor()<<"\n";
    std::cout<<"wheel: "<<getWheel()<<"\n";

    std::cout<<"SportMode: "<<sportsMode<<"\n";
  }
};

int main(){
  SportsVehicle v1(1);
  v1.setColor();
  v1.setWheel();
  v1.display();

}
