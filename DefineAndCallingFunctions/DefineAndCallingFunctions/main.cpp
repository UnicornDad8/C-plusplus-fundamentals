//
//  main.cpp
//  DefineAndCallingFunctions
//
//  Created by Ceci Benitez on 1/2/24.
//

#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName) {
    return firstName + " " + lastName;
}

int main() {
    // invoking
    greet(fullName("Ceci", "Benitez"));
    
    cout << "Done" << endl;
    
    return 0;
}
