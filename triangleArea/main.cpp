#include <iostream>
using namespace std;

double triangleArea(double base, double height) {
    return (base * height) /2;
}

int main() {
    cout << triangleArea(3, 2) << endl;
    cout << triangleArea(7, 4) << endl;
    cout << triangleArea(10, 10) << endl;
    return 0;
}