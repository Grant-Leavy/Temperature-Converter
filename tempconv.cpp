// updated code 2
#include <iostream>

using namespace std;

int main()

{
    double first;
    double second;
    double third;
    char x, y;
    string z;


    cout<<"Welcome to your favorite temperature conversion calculator!\n\n";
    cout<<"Which temperature unit would you like to convert from? Type f for farenheit, c for celsius, or k for kelvin: ";
    cin>> x;
    
     if (x='f') {
        z="farenheit";

  } else if (x='c') {
      z="celsius";
  } else if (x='k') {
      z="kelvin";
  }
    
    cout<<"What is the numerical value for " << z <<": ";
    cin>>first;
    
     if (x='f') {
        second = first+10;
        third = first+50;
  } else if (x='c') {
       second = first-10;
       third = first-50;
  } else if (x='k') {
      second = first+1000;
      third = first+40000;
  }
  
    cout<< first << " " << z << " equals: ";
    cout<< "to which other unit? Type f for farenheit, c for celsius, or k for kelvin: ";


   
   
   
    return 0;
}
