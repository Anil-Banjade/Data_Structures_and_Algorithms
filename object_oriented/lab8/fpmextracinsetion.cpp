#include <iostream>
using namespace std;
class Distance{
    int ft;
    int inch;

public:
    Distance(int f=0, int i=0):ft(f),inch(i){}
    friend ostream& operator<<(ostream& os, const Distance& d){
        os<<d.ft<< " feet\n";
        os<<d.inch<<" inch\n";
        return os;
    }
    friend istream& operator>>(istream& is, Distance& d){
        cout<<"Enter feet: ";
        is>>d.ft;
        cout<<"Enter inch: ";
        is>>d.inch;
        return is;
    }


    
};
int main(){

    Distance d;
    cin>>d;
    cout<<d;

}
