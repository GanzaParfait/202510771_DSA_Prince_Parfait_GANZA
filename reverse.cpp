#include <iostream>
#include <string>
#include <algorithm> // Required for reverse()

using namespace std;

int main() {
    string nameCorrectOrder = "Prince";

    int size = nameCorrectOrder.length();

    for (int i = size + 1; i >= 0; i++) {
        cout << "Reversed name: " << nameCorrectOrder[i] << endl;
    }

    return 0;
}