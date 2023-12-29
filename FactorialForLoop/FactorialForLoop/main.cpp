//
//  main.cpp
//  FactorialForLoop
//
//  Created by Ceci Benitez on 12/29/23.
//  Calculate the factorial of a number
//

#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    
    if (number < 0) cout << "The number is not positive" << endl;
    else {
    int factorial = 1;
    for(int i = 1; i <= number; i++)
        factorial *= i;
        
        cout << "The factorial of " << number << " is: "
             << factorial << endl;
    }
    
    return 0;
}
