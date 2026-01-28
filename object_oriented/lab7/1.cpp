#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int id;

public:

  Student(string n,int i):name(n),id(i){}
  /*  void getInfo() {
        cin >> name;
        cin >> id;
	} */
};

class Test : public Student {
protected:
    int m_oop;
    int m_maths;
    int m_edc;

public:

  Test(string n,int i,int oop,int maths):Student(n,i),m_oop(oop),m_maths(maths){}

  /*
    void get_score() {
        cin >> m_oop;
        cin >> m_maths;
        cin >> m_edc;
    }

  */
};

class Result : public Test {
public:

  Result(string n, int i, int oop,int maths):Test(n,i,oop,maths){}
    void display() {
        cout << "Name: " << name << "\n";
        cout << "ID: " << id << "\n";
        cout << "Total Marks: " << m_oop + m_maths<< "\n";
    }
};

int main() {
  string name;
  int id,oop,maths;
  cin>>name;
  cin>>id;
  cin>>oop;
  cin>>maths;
  
  Result result(name,id,oop,maths);
  //result.getInfo();
  //result.get_score();
    result.display();

    return 0;
}
