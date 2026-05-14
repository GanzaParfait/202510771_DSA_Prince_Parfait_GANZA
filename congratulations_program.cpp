#include <iostream>
#include <string>

void greetUser() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "congratulations " << name << std::endl;
}

int main() {
    greetUser();
    return 0;
}