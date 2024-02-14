#include <iostream>
using namespace std;
/* Wednesday Feb. 5, 2024
 *
 * solution to the HW2 Problem
void test3(int arr[], int capacity) {
    for (int i = 0; i < capacity; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[3] = {0};
    for (int i0 = 0; i0 < 10; i0++) {
        for (int i1 = 0; i1 < 10; i1++) {
            for (int i2 = 0; i2 < 10; i2++) {
                array[0] = i0;
                array[1] = i1;
                array[2] = i2;
                test3(array, 3);
            }
        }
    }

    // using goto statements with labels (keywords)
    int i = 30;
    goto TEST2;

TEST:    i += 5;
    goto LAST;

END:    cout << i << endl;
TEST2:    i = 100;
goto TEST;
LAST:    cout << i << endl;

    // rewrite using goto statements
    // int j = 0;
    // while (j < 5) {
    //      cout << "Hello World";
    //      j++;
    }

    goto REPEAT;
    int j = 0;
REPEAT:    cout << "Hello" << endl;
    if (j < 5) {
        j++;
        goto REPEAT;
    }

    return 0;
}
*/

/*
int main() {
    int i = 100;
    REPEAT: cout << i << endl;
    i+=10;
    if (i < 200) goto REPEAT;
}
*/

int main() {
    // setup the board and any configurations
    int board[8][8] = {0};
    int r = 0;
    int c = 0;

    // place the first queen
    board[0][0] = 1;
    nextColumn: c++;

    // we found a solution
    // print that solution
    if (c > 7) {

    }

    r = -1;
    nextROW: r++;
    if (r > 7) goto backTrack;

    // test 1: are there queens on same row
    if () goto nextROW;

    // test 2: are there queens on the up diag
    if () goto nextROW;

    // test 3: are there queens on the down diag
    if () goto nextROW;

    // place queen
    board[r][c] = 1;
    goto nextColumn;

    // go back a column
    backTrack: c--;

    // find the row the queen is on
    r = 0;
    // use a while loop and make sure you find the row a queen is on
    // find the row the queen is on
    board[r][c] = 0;
    goto nextROW;

}
