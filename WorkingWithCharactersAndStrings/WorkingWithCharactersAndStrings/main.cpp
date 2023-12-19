//
//  main.cpp
//  WorkingWithCharactersAndStrings
//
//  Created by Ceci Benitez on 12/19/23.
//

#include <iostream>

using namespace std;

int main() {
    char a = 'a';
    char b = 98;
    
    cout << a << endl;
    cout << +a << endl;
    cout << b << endl;
    
    cout << "---------------------------------" << endl;
    string name;
    
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hi " << name << endl;
    
    return 0;
}
