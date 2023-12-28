//
//  main.cpp
//  IfStatements
//
//  Created by Ceci Benitez on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    int temperature = 100;
    if(temperature < 60)
        cout << "Cold" << endl;
    else if(temperature < 90)
        cout << "Nice" << endl;
    else
        cout << "Hot" << endl;

    return 0;
}
