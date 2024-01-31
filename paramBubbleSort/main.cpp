#include <iostream>
using namespace std;

typedef bool (* comparator) (int, int);

bool ascending(int k, int l) {
    return k < l;
}

bool descending(int k, int l) {
    return k > l;
}

void sort(int num[], int size, comparator comp) {
    bool flag = true;
    int temp;
    for (int i=1; (i <= size) && flag; i++) {
        flag = false;
        for (int j=0; j < (size-1); j++) {
            if (comp(num[j+1], num[j])) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                flag = true;
            }
        }
    }
}

int values[] = {40, 10, 100, 90, 20, 25};

int main() {
    sort(values, 6, ascending);
    for (int n=0; n < 6; n++) {
        cout << values[n] << " ";
    }
    cout << endl;
    return 0;
}
