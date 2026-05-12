// 202510771_DSA_Prince_Parfait_GANZA
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int chosenNumber = 7; // The predefined number [cite: 94, 95]
    int userGuess = 0;    // Variable for user input [cite: 96]
    vector<int> guessHistory; // Dynamic array to record attempts [cite: 97]

    // While loop runs until the guess is correct [cite: 98]
    while (userGuess != chosenNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess; // Store value [cite: 100, 101]
        
        guessHistory.push_back(userGuess); // Record attempt immediately [cite: 102]

        // Compare guess with chosen number [cite: 103]
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl; // [cite: 104]
        } else if (userGuess < chosenNumber) {
            cout << "Too low" << endl; // [cite: 105]
        } else {
            cout << "Correct" << endl; // [cite: 106]
        }
    }

    // Display all recorded guesses after the loop [cite: 107]
    cout << "\nAll your attempts:" << endl;
    for (int i = 0; i < guessHistory.size(); i++) {
        cout << "Attempt " << i + 1 << ": " << guessHistory[i] << endl;
    }

    return 0;
}