#include <iostream>
using namespace std;

string add(string& a, string& b) {
    string sum = a + b;
    return sum;
}

int main() {
    string a, b;
    while (true) {
        cout << "number a: ";
        cin >> a;
        if (a == "done") break;
        cout << "number b: ";
        cin >> b;
        cout << "sum: " << add(a, b) << endl;
    }
    return 0;
}
