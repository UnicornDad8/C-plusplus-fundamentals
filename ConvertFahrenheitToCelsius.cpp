//
//  main.cpp
//  ConvertFahrenheitToCelsius
//
//  Created by Ceci Benitez on 12/16/23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Enter temperature in fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    
    double celsius = (fahrenheit - 32) / 1.8;
    
    cout << "The temperature in celsius is: " << celsius << endl;
    
    return 0;
}
