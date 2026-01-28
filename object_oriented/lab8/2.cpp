#include <iostream>
#include <fstream>

using namespace std;
int main(){

ofstream outfile;
outfile.open("myfile1.txt");

 
int n=2;

string name[n];
string address[n];
string program[n];

for(int i=0;i<n;i++){
  cout<<"Enter name: \n";
  cin>>name[i];

  outfile<<name[i]<<endl;

  cout<<"Enter address: \n";
  cin>>address[i];
  outfile<<address[i]<<endl;
  cout<<"Enter program: \n";
  cin>>program[i];
  outfile<<program[i]<<endl;
 }

  outfile.close();

  ifstream infile;
  infile.open("myfile1.txt");

  for(int i=0;i<n;i++){
    infile>>name[i];
    cout<<"Name:"<<name[i]<<"\n";
    infile>>address[i];
    cout<<"Address:"<<address[i]<<"\n";
    infile>>program[i];
    cout<<"Program:"<<program[i]<<"\n";
 }

  string search="ab";
  
  for(int i=0;i<n;i++){
    if(search==name[i]){

      cout<<"Searched information:\n";
      cout<<"Name:"<<name[i]<<"\n";
      cout<<"address:"<<address[i]<<"\n";
      cout<<"program:"<<program[i]<<"\n";
    }
 }

  infile.close();
  
}
