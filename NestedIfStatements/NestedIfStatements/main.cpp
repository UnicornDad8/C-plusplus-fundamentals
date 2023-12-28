//
//  main.cpp
//  NestedIfStatements
//
//  Created by Ceci Benitez on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    // US Citizen
    //    CA Resident: tutuition 0
    //    Non Resident: tutuition 1000
    // Not a US Citizen
    //    tutuition 3000
    bool isCitizen = true;
    bool caResident = false;
    short tuition = 0;

    // Outer if statement
    if(isCitizen) {
        // Inner if statement
        if(!caResident) tuition = 1000;
    }
    else tuition = 3000;
    
    cout << tuition << endl;
    
    return 0;
}
