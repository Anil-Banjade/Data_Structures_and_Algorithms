#include <iostream>
using namespace std;
class Course{
protected:
  string faculty;
public:
  Course(string f):faculty(f){}

  void display(){
    cout<<"Faculty: "<<faculty;

  }
};


class Mathematics:public Course{
private:
  string teacher;
public:
  Mathematics(string f,string t):Course(f),teacher(t){}

  void display(){
    Course::display();
    cout<<"Maths Teacher: "<<teacher<<"\n";
  }
};

class Engineering:public Course{
private:

  string teacher;
public:
  Engineering(string f,string t):Course(f),teacher(t){}

  void display(){
    Course::display();
    cout<<"Engineering Head: "<<teacher<<"\n";
  }
};
  
class Science:public Course{

protected:

  int total_subject;
  public:
  Science(string f,int s):Course(f),total_subject(s){}

  void display(){
    Course::display();
    cout<<"Total science subject are: "<<total_subject<<"\n";
  }
  


};

class Physics:public Science{
private:
  int  marks;

public:
  Physics(string f, int s, int m):Science(f,s),marks(m){}

  void display(){
    Course::display();
    cout<<"marks in physics: "<<marks<<"\n";
  }

};
class Chemistry:public Science{
private:
  int  marks;

public:
  Chemistry(string f, int s, int m):Science(f,s),marks(m){}

  void display(){
    Course::display();
    cout<<"marks in chemistry: "<<marks<<"\n";
  }


};


int main(){
  Mathematics m("Maths Faculty","SB");
  m.display();
  Engineering e("BCT","UKG sir");
  e.display();
  Science s("Applied",7);
  s.display();
  Physics p("Science faculty",10,98);
  p.display();
  Chemistry c("Science Faculty",10,97);
  c.display();
  return 0;

}
