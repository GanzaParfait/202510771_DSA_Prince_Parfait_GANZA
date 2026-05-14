#include<iostream>
#include<string>

using namespace std;

int main() {
    string correctNameOrder = "Prince";
    int size = correctNameOrder.length();

    for (int i = size; i >= 0; i--) {
        cout << "Reversed name: " << correctNameOrder[i] << endl;
    }

    return 0;
}
