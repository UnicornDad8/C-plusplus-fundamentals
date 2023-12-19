//
//  main.cpp
//  WorkingWithTheStandartLibrary
//
//  Created by Ceci Benitez on 12/16/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    
    cout << "The area of the circle is: " << area << endl;
    
    return 0;
}
