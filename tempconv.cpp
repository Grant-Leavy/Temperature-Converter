#include <iostream>

using namespace std;

int main()

{
    double input, farenheit, celsius, kelvin;
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
    cin>>input;

     if (x='f') {
        farenheit = input;
        celsius = 5/9*input+10;
        kelvin = 5/9*input+459.67;
        cout<<"celsius = " <<celsius;
        cout<<"\nkelvin = " << kelvin;
    
  } else if (x='c') {
         farenheit = input;
        celsius = 5/9*input+10;
        kelvin = 5/9+20;
        cout<<"celsius = " <<celsius;
        cout<<"\nkelvin = " << kelvin;
  } else if (x='k') {
        farenheit = input;
        celsius = 5/9*input-32;
        kelvin = 5/9*input+459.67;
        cout<<"celsius = " <<celsius;
        cout<<"\nkelvin = " << kelvin;
  }

    cout<< input << " " << z << " equals: ";
    cout<< "to which other unit? Type f for farenheit, c for celsius, or k for kelvin: ";

    return 0;
}
