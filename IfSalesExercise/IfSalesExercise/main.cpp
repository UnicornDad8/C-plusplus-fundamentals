//
//  main.cpp
//  IfSalesExercise
//
//  Created by Ceci Benitez on 12/28/23.
//

#include <iostream>

using namespace std;

int main() {
    int sales = 11'000;
    double comission;
    
    if(sales <= 10'000) comission = .1;
    else if(sales > 10'000 && sales <= 15'000) comission = .15;
    else comission = .2;
    
    cout << comission << endl;
    
    return 0;
}
