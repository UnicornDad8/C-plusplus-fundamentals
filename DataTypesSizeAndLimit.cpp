//
//  main.cpp
//  DataTypesSizeAndLimit
//
//  Created by Ceci Benitez on 12/18/23.
//

#include <iostream>

using namespace std;

int main() {
    int numberMax = numeric_limits<int>::max();
    int numberMin = numeric_limits<int>::min();
    
    cout << numberMax << endl;
    cout << numberMin << endl;
    cout << "----------------------------------------" << endl;
    
    numberMax++;
    numberMin--;
    
    cout << "overflow: " << numberMax << endl;
    cout << "underflow: " << numberMin << endl;
    
    return 0;
}
