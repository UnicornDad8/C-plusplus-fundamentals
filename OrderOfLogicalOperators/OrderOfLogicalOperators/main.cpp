//
//  main.cpp
//  OrderOfLogicalOperators
//
//  Created by Ceci Benitez on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    bool isCitizen = false;
    bool hasBachelorDegree = true;
    short yearsOfExperience = 3;
    
    bool isEligible = isCitizen && (hasBachelorDegree || yearsOfExperience >= 2);
    cout << boolalpha << isEligible << endl;
    return 0;
}
