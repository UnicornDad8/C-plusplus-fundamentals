//
//  main.cpp
//  DoWhileLoop
//
//  Created by Ceci Benitez on 12/29/23.
//

#include <iostream>

using namespace std;

int main() {
    int number = 0;
    
    do {
        cout << "Number: ";
        cin >> number;
    } while(number < 1 || number > 5);
    return 0;
}
