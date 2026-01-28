#include <iostream>
#include <fstream>
using namespace std;

class Person {
private:
    string name[255];
    string address[255];
    string program[255];

public:
    int n = 2;

    void put_data() {
        ofstream outfile;
        outfile.open("1.txt");

        if (outfile.is_open()) {
            for (int i = 0; i < n; i++) {
                cout << "Enter name: ";
                cin >> name[i];
                outfile << name[i] << endl;
                cout << "Enter address: ";
                cin >> address[i];
                outfile << address[i] << endl;
                cout << "Enter program: ";
                cin >> program[i];
                outfile << program[i] << endl;
            }
            outfile.close();
        } else {
            cerr << "Error opening file!" << endl;
        }
    }

    void get_data() {
        ifstream infile;
        infile.open("1.txt");

        if (infile.is_open()) {
            for (int i = 0; i < n; i++) {
                infile >> name[i];
                cout << "Name: " << name[i] << endl;
                infile >> address[i];
                cout << "Address: " << address[i] << endl;
                infile >> program[i];
                cout << "Program: " << program[i] << endl;
            }
            infile.close();
        } else {
            cerr << "Error opening file!" << endl;
        }
    }

    void search() {
        string s;

        std::cout<<"\n string you want to search \n";
        cin>>s;
        for (int i = 0; i < n; i++) {
            if (name[i] == s) {
                cout << "Searched info:" << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Address: " << address[i] << endl;
                cout << "Program: " << program[i] << endl;
            }
        }
    }
};

int main() {
    Person person;

    person.put_data();  
    person.get_data(); 
    person.search();      

    return 0;
}
