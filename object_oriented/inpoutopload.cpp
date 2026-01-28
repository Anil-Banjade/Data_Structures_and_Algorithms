#include <iostream>

class FPS{
  float feet;

  friend <<(ostream &f, fp){
    std::cout<<f.feet;
    
  }
}
