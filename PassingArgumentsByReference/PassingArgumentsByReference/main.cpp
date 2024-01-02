//
//  main.cpp
//  PassingArgumentsByReference
//
//  Created by Ceci Benitez on 1/2/24.
//

#include <iostream>

using namespace std;

void greet(const string& name) {
    cout << "Hello " << name << endl;
}

int main() {
    string name = "Ceci";
    greet(name);
    
    return 0;
}
