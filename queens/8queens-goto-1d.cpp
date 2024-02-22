#include <iostream>
using namespace std;

int main() {
    int q[8], c = 0;
    q[0] = 0;

    NC: c++;
    if (c == 8) goto print;
    q[c] = -1;

    NR: q[c]++;
    if (q[c] == 8) goto BACKTRACK;

    // row test
    for (int i = 0; i < c; i++) 
        if (q[c] == q[i]) goto NR;

    // upper diagonal test
    for (int i = 0; i < c; i++) 
        if (c - i == q[c] - q[i]) goto NR;

    // lower diagonal test
    for (int i = 0; i < c; i++)
        if (c - i == q[i] - q[c]) goto NR; 

    // queen successfully placed in column
    // move to next column
    goto NC;

    BACKTRACK:
    c--;
    if (c == -1) return 0; // all solutions have been found
    goto NR;

    print:
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (q[j] == i) cout << "1 ";
            else cout << "0 ";
        }
        cout << "\n";
    }
    cout << "\n";
    goto BACKTRACK; // backtrack to find the next solution

    return 0;
}