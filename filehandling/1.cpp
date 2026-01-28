#include <iostream>
#include <fstream>
using namespace std;

class Person {
private:
    string name[255];
    string address[255];
    string program[255];
    int n = 0; // Initialize the number of entries to 0

public: 
    void put_data() {
        ofstream outfile;
        outfile.open("1.txt", ios::app); // Open the file in append mode

        if (outfile.is_open()) {
            cout << "Enter name: ";
            cin >> name[n];
            outfile << name[n] << endl;
            cout << "Enter address: ";
            cin >> address[n];
            outfile << address[n] << endl;
            cout << "Enter program: ";
            cin >> program[n];
            outfile << program[n] << endl;
            n++; // Increment the number of entries
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

        cout << "\nEnter the name you want to search: ";
        cin >> s;
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
    int choice;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Add Data" << endl;
        cout << "2. View Data" << endl;
        cout << "3. Search Data" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: "; 
        cin >> choice;

        switch (choice) {
            case 1:
                person.put_data();
                break;
            case 2:
                person.get_data();
                break;
            case 3:
                person.search();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
