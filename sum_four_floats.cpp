#include <iostream>

float sumFour(float a, float b, float c, float d) {
    return a + b + c + d;
}

int main() {
    float n1, n2, n3, n4;
    std::cout << "Enter four float numbers: ";
    std::cin >> n1 >> n2 >> n3 >> n4;
    std::cout << "The sum is: " << sumFour(n1, n2, n3, n4) << std::endl;
    return 0;
}