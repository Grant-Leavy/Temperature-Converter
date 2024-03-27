#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  const double zero_celsius_in_kelvin = 273.15;

  double input, fahrenheit, celsius, kelvin;
  char x, y;
  string z;

  cout << "Welcome to your favorite temperature conversion calculator!\n\n";
  cout << "Which temperature unit would you like to convert from? Type f for fahrenheit, c for celsius, or k for kelvin: ";
  cin >> x;

  if (x == 'f')
  {
    z = "fahrenheit";
  }
  else if (x == 'c')
  {
    z = "celsius";
  }
  else if (x == 'k')
  {
    z = "kelvin";
  }

  cout << "What is the numerical value for " << z << ": ";
  cin >> input;

  if (x == 'f')
  {
    fahrenheit = input;
    celsius = (5 / 9) * (input - 32);
    kelvin = (5 / 9) * (input - 32) + zero_celsius_in_kelvin;
    cout << "celsius = " << celsius;
    cout << "\nkelvin = " << kelvin;
  }
  else if (x == 'c')
  {
    celsius = input;
    fahrenheit = (9 / 5) * input + 32;
    kelvin = input + zero_celsius_in_kelvin;
    cout << "fahrenheit = " << fahrenheit;
    cout << "\nkelvin = " << kelvin;
  }
  else if (x == 'k')
  {
    kelvin = input;
    fahrenheit = (9 / 5) * (input - zero_celsius_in_kelvin) + 32;
    celsius = input - zero_celsius_in_kelvin;
    cout << "fahrenheit = " << farenheit;
    cout << "\ncelsius = " << celsius;
  }

  return 0;
}
