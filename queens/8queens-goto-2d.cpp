#include <iostream>
using namespace std;

int main() {
    int b[8][8] = {0}, row, col = 0;

    b[0][0] = 1;
    NC: col++;
    if (col == 8) goto print;
    row = -1;
    
    NR: row++;
    if (row == 8) goto BACKTRACK;

    // row test
    for (int i = 0; i < col; i++) {
        if (b[row][i] == 1) goto NR;
    }

    // upper diagonal
    for (int i = 1; (row - i) >= 0 && (col - i) >= 0; i++) {
        if (b[row-i][col-i] == 1) goto NR;
    }

    // lower diagonal
    for (int i = 1; (row+i) < 8 && (col-i) >= 0; i++) {
        if (b[row+i][col-i] == 1) goto NR;
    }

    b[row][col] = 1; // position found, place queen
    goto NC; // move to next column

    // backtrack
    BACKTRACK:
    col--;
    if (col == -1) return 0; // all solutions found
    row = 0;
    while(b[row][col] != 1)
        row++;
    b[row][col] = 0; // remove the queen
    goto NR;

    // print the board
    print: 
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    goto BACKTRACK; // backtrack to find the next solution

    return 0;
}