// #include <iostream>

// class design1{
//     int code, qty,price;
//     public:
//     design1(int c,int q,int p):code(c),qty(q),price(p){}

//     int get_code(){
//         return code;

//     }
//     int get_qty(){
//         return qty;
//     }

//     int get_price(){
//         return price;
//     }
// };


// class design2{
//     int code, value;
//     public:

//     design2(int c,int v):code(c),value(v){}

//     design2(design1 &p1){
//         code=p1.get_code();
//         value=p1.get_qty()*p1.get_price();

//     }

//     void display(){
//         std::cout<<code<< " "<<value<<"\n";
//     }
// };

// int main(){

//     design1 d1(4,5,7);
//     design2 d2(d1);
//     d2.display();
    
// }

// #include <iostream>

// class design1{
//     int code, qty,price;
//     public:
//     design1(int c,int q,int p):code(c),qty(q),price(p){}

//     int get_code(){
//         return code;

//     }
//     int get_qty(){
//         return qty;
//     }

//     int get_price(){
//         return price;
//     }

//     operator design2();

    
// };


// class design2{
//     int code, value;
//     public:

// design2(){}
//     design2(int c,int v):code(c),value(v){}

//     void set_code(int c){
//         code =c;
//     }
//     void set_value(int v){
//         value =v;
//     }

//     void display(){
//         std::cout<<code<< " "<<value<<"\n";
//     }
// };

// design1::operator design2(){
//         design2 temp;
//         temp.set_code(code);
//         temp.set_value(price*qty);
//         return temp;
//     }

// int main(){

//     design1 d1(4,5,7);
//     design2 d2(d1);
//     d2.display();
    
// }




#include <iostream>

class design2 {
    int code, value;
public:
    design2() {}
    design2(int c, int v) : code(c), value(v) {}

    void set_code(int c) {
        code = c;
    }
    void set_value(int v) {
        value = v;
    }

    void display() {
        std::cout << code << " " << value << "\n";
    }
};

class design1 {
    int code, qty, price;

public:
    design1(int c, int q, int p) : code(c), qty(q), price(p) {}

    int get_code() {
        return code;
    }
    int get_qty() {
        return qty;
    }
    int get_price() {
        return price;
    }

    operator design2() {
        design2 temp;
        temp.set_code(code);
        temp.set_value(price * qty);
        return temp;
    }
};

int main() {
    design1 d1(4, 5, 7);
    design2 d2(d1);
    d2.display();

    return 0;
}