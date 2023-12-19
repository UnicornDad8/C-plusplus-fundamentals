//
//  main.cpp
//  FormatingOutput
//
//  Created by Ceci Benitez on 12/18/23.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left;
    cout << setw(15) << "Course" << setw(10) << "Student" << endl
         << setw(15) << "C++" << setw(5) << right << 100 << left << endl
         << setw(15) << "JavaScript" << setw(5) << right << 50 << left << endl;
    
    return 0;
}
