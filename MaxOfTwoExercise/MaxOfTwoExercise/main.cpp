//
//  main.cpp
//  MaxOfTwoExercise
//
//  Created by Ceci Benitez on 1/2/24.
//  --------------------------------------------------------
//  Create a function that receives two integers and returns
//  the maximum of the two.
//

#include <iostream>

using namespace std;

int max(int first, int second) {
    return first > second ? first : second;
}

int main() {
    int larger = max(1, 1);
    cout << larger << endl;
    
    return 0;
}
