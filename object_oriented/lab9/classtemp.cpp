#include <iostream>
#include <string>

using namespace std;

#define m_length 10
template <class itemt>

class GList{
  int length=10;
  itemt data[m_length];

public:
  void Insert(itemt item);
};

template <class itemt>

void GList<itemt>::Insert(itemt item){


  data[length]=item;
  std::cout<<data[length]<<"\n";
  length++;
}
template <class itemt>

void display(){
 
}

int main(){


  GList<int> list1;
  GList<float> list2;
  GList<string> list3;

  list1.Insert(443);
  list1.Insert(7);
  list1.Insert(443);

  list2.Insert(43.43);
  list3.Insert("dfaf");
  
}
