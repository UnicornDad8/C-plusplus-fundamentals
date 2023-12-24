//
//  main.cpp
//  TypeConversion
//
//  Created by Ceci Benitez on 12/23/23.
//

#include <iostream>

using namespace std;

int main() {
    // int x = 1;
    // double y = 2.2;
    // double z = x + y; // no data loss
    // int z = x + (int)y; // C style casting
    // int z = x + static_cast<int>(y); // C++ casting
    
    int x = 10;
    int y = 3;
    
    double z = static_cast<double>(x) / y; // we could convert x or y, either way the result will be a double
    
    cout << z << endl;
    return 0;
}
