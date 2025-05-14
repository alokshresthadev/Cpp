//WRITE A PROGRAM TO SWAP TWO NUMBERS USING REFERENCE VARIABLE AND FUNCTION
#include <iostream>
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;
    return 0;
}
