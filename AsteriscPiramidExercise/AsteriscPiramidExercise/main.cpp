//
//  main.cpp
//  AsteriscPiramidExercise
//
//  Created by Ceci Benitez on 12/29/23.
//  Ask the user for a number of rows and draw one asteris per number of row
//  example in row 3 draw (* * *) in row 1 draw (*).
//

#include <iostream>

using namespace std;

int main() {
    int rows = 0;
    cout << "Enter a number of rows: ";
    cin >> rows;
    
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++)
            cout << " * ";
        cout << endl;
    }
    
    return 0;
}
