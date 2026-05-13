#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct FamilyMember {
    string name;\
    int age;
};

int main() {
    int n;
    cout << "How many family members? ";
    cin >> n;

    vector<FamilyMember> family(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter name and age for member " << i+1 << ": ";
        cin >> family[i].name >> family[i].age;
    }

    string searchKey;
    cout << "\nEnter name to search: ";
    cin >> searchKey;

    bool found = false;
    for(int i = 0; i < n; i++) {
        if(family[i].name == searchKey) {
            cout << searchKey << " was found and is aged " << family[i].age << endl;
            found = true;
            break;
        }
    }

    if(!found) cout << "Not found" << endl;
    return 0;
}