//
//  main.cpp
//  SwitchExerciseMiniCalculator
//
//  Created by Ceci Benitez on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    int numero1, numero2;
    char operador;
   
    cout << "Ingresa dos valores: " << endl;
    cout << "numero 1: " << "\t";
    cin >> numero1;
    cout << "numero 2: " << "\t";
    cin >> numero2;
    
    cout << "Elige la operacion que deseas aplicar: ";
         
    cin >> operador;
    
    switch(operador) {
        case '+':
          cout << numero1 + numero2 << endl;
          break;
        case '-':
          cout << numero1 - numero2 << endl;
          break;
        case '*':
          cout << numero1 * numero2 << endl;
          break;
        case '/':
          cout << static_cast<double>(numero1) / numero2 << endl;
          break;
        default:
          cout << "Operador invalido" << endl;
    }

    return 0;
}
