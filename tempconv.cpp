// Updated code - not complete
#include <iostream>

using namespace std;

int main()

{
    double farenheit;
    double celsius;
    double kelvin;
    char x, y;
    string z;
    

    cout<<"Welcome to your favorite temperature conversion calculator!\n";
    cout<<"Which temperature unit would you like to convert from? Type f for farenheit, c for celsius, or k for kelvin: ";
    cin>> x;
    cout<<"What is the numerical value for " << x <<": ";
    cin>>farenheit;
    cout<< "You would like to convert ";
    cout<< x;
    cout<< " to which other unit? Type f for farenheit, c for celsius, or k for kelvin: ";
    cin>> y;
    
 /*   if (x="f") {
        z="farenheit";
        
  } else if (x="c") {
      z="celsius";
  }
  */ 
    return 0;
}
