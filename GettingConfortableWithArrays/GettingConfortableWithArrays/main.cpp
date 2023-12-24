//
//  main.cpp
//  GettingConfortableWithArrays
//
//  Created by Ceci Benitez on 12/23/23.
//

#include <iostream>

using namespace std;

int main() {
    string names[3];
    
    cout << "Enter 3 names" << endl;
    cout << "Name 1: ";
    getline(cin, names[0]);
    
    cout << "Name 2: ";
    getline(cin, names[1]);
    
    cout << "Name 3: ";
    getline(cin, names[2]);
    
    cout << names[0] << endl;
    return 0;
}
