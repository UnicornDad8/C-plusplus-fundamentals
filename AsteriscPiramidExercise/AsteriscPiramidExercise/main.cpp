//
//  main.cpp
//  AsteriscPiramidExercise
//
//  Created by Ceci Benitez on 12/29/23.
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
