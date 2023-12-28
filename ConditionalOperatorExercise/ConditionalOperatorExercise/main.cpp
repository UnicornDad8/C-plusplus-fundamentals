//
//  main.cpp
//  ConditionalOperatorExercise
//
//  Created by Ceci Benitez on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    int numero1, numero2, mayorValor;
    
    cout << "Ingresa dos valores: " << endl;
    cout << "numero 1: " << "\t";
    cin >> numero1;
    cout << "numero 2: " << "\t";
    cin >> numero2;
    
    mayorValor = numero1 > numero2 ? numero1 : numero2;
    
    cout << mayorValor << endl;

    return 0;
}
