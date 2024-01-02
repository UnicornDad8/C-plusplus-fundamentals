//
//  main.cpp
//  PassingArguments
//
//  Created by Ceci Benitez on 1/2/24.
//

#include <iostream>

using namespace std;

/*
double increasePrice(double price) {
    price *= 1.2;
    return price;
}
*/

void increasePrice(double& price) {
    price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(price);
    cout << price << endl;
    
    return 0;
}
