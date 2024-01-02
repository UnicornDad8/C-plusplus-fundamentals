//
//  main.cpp
//  OverloadingFunctions
//
//  Created by Ceci Benitez on 1/2/24.
//

#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello " << name << endl;
}

void greet(string title, string name) {
    cout << "Hello " << title << " " << name << endl;
}

int main() {
    greet("Ceci");
    greet("Profesor", "Ceci");
    return 0;
}
