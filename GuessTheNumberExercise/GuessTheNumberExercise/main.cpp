//
//  main.cpp
//  GuessTheNumberExercise
//
//  Created by Ceci Benitez on 12/29/23.
//

#include <iostream>

using namespace std;

int main() {
    int secret = 7, guess = 0;
    
    while(guess != secret) {
        cout << "Please guess the number!" << endl;
        cout << "Enter a guess: ";
        cin >> guess;
        
        if (guess == secret) {
            cout << "You guessed the number, the number was "
                 << secret << endl;
            break;
        }
    }
    
    return 0;
}
