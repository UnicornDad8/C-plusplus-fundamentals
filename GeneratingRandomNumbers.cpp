//
//  main.cpp
//  GeneratingRandomNumbers
//
//  Created by Ceci Benitez on 12/17/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Imagine you are playing with dices
    const short minValue = 1;
    const short maxValue = 6;
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;
    
    cout << first << ", " << second << endl;
    return 0;
}
