//
//  main.cpp
//  CalculateAverageTemperature
//
//  Created by Ceci Benitez on 12/29/23.
//

#include <iostream>

using namespace std;

int main() {
    int temperatures[] = { 60, 80, 90 };
    double sum = 0;
    
    for(int temperature: temperatures)
        sum += temperature;
    
    short count = sizeof(temperatures) / sizeof(int);
    double average = sum / count;
    
    cout << average << endl;
   
    return 0;
}
