//
//  main.cpp
//  BreakAndContinueKeywords
//
//  Created by Ceci Benitez on 12/29/23.
//  1- Solve the odd numbers from 0 to 10 using the continue keyword
//  2- Create an infinite loop and only break out of the loop if the number the
//  user enter is between range: n >= 1 && n <= 5.
//

#include <iostream>

using namespace std;

int main() {
    // Exercise 1:
    for(int i = 0; i <= 10; i++) {
        if(i % 2 == 0)
            continue;
        
        cout << i << endl;
    }

     
    // Exercise 2:
    int number = 1;
    while(true) {
        cout << "Number: ";
        cin >> number;
        
        if(number >= 1 && number <= 5) break;
        cout << "Error!, enter a number between 1 and 5" << endl;
    }
    
    return 0;
}
