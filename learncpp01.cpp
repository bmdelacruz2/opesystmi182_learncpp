#include<ncurses.h>
#include<stdio.h>
#include<iostream>
using namespace std;
main() {
   float f, c;
   cout << "Enter temperature in Fahrenheit: ";
   cin >> f;
   c = (f-32) * 5/9;
   cout << "Equivalent celcius temperature is: " << c;
}
