/*#include <iostream>

class Time{
  int hr;
  int min;
  int sec;
public:
  Time(){
    hr=12;
    min=0;
    sec=0;
       }

  Time(int h, int m, int s){
    hr=h;
    min=m;
    sec=s;
  }

  void display(){
     std::cout<<hr<<":"<<min<<":"<<sec<<"\n";
  }

  

};

int main(){
  int hr,min,sec;
  std::cin>>sec;

  while(true){
    hr=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    break;
    
  }
  
  Time t1(hr,min,sec);
 
  t1.display();
  Time t2(t1);
  t2.display();

}

*/

#include <iostream>

class Time{
  int hr,min,sec;

public:
  Time(int s):hr(0),min(0),sec(s){}
  Time (Time &t){
    hr=t.hr;
    min=t.min;
    sec=t.sec;
  }
  void calc(){
    hr=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
  }
  

  void display(){
    
    std::cout<<hr<<":"<<min<<":"<<sec<<"\n";
  }
  

};

int main(){
  int sec;
  std::cin>>sec;
  Time t1(sec);
  t1.calc();
  t1.display();


  Time t2(t1);
  t2.display();
}
