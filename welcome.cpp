#include <iostream>
#include <string>

using namespace std;

void WelcomeUser(string username) {
    cout << "Welcome, " << username << "!" << endl;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    WelcomeUser(name);

    return 0;
}