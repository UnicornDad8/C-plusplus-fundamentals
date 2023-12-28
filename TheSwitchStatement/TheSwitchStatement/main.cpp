//
//  main.cpp
//  TheSwitchStatement
//
//  Created by Ceci Benitez on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    short input;
    cout << "1- Create account" << endl
         << "2- Change Password" << endl
         << "3- Quit" << endl
         << "Select an option: ";
    
    cin >> input;
    
    switch(input) {
        case 1:
            cout << "You selected 1" << endl;
            break;
        case 2:
            cout << "You selected 2" << endl;
            break;
        default:
            cout << "Goodbye!" << endl;
    }
    
    return 0;
}
