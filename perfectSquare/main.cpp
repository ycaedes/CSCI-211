#include <iostream>
using namespace std;

int main() {
    int perfectSquare;
    for (int i = 10; i < 1000; i++) {
        perfectSquare = i * i;
        if ((perfectSquare % 10) % 2 != 0 && (perfectSquare / 10) % 10 % 2 != 0) {
            cout << perfectSquare << endl;
        }
    }
    return 0;
}
