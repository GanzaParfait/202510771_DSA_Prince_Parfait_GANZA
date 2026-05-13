#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> names = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};
    int n = names.size();

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(names[j] > names[j+1]) {
                swap(names[j], names[j+1]);
            }
        }
    }

    cout << "Sorted Names: ";
    for(string name : names) cout << name << " ";
    return 0;
}