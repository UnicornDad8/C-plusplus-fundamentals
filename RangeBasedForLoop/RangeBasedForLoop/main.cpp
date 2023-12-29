//
//  main.cpp
//  RangeBasedForLoop
//
//  Created by Ceci Benitez on 12/29/23.
//

#include <iostream>

using namespace std;

int main() {
    int numbers[] = { 1, 2, 3, 4 };
    
    // sizeof(numbers): 16
    // sizeof(int): 4
    for(int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
        cout << numbers[i] << endl;
    }
    
    cout << "-------------------------------" << endl;
    
    for (int number: numbers) {
        cout << number << endl;
    }
    
    return 0;
}
