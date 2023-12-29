//
//  main.cpp
//  OddNumbersExercise
//
//  Created by Ceci Benitez on 12/29/23.
//  Imprime todos los numeros impares de 0 a 10.
//

#include <iostream>

using namespace std;

int main() {
    for(int i = 0; i <= 10; i++) {
        if(i % 2 != 0)
            cout << i << endl;
    }
    
    return 0;
}
