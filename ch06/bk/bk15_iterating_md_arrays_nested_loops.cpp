#include <iostream>

using namespace std;

int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLUMNS = 4;

    // 2D array of integers
    int MyInts[NUM_ROWS][NUM_COLUMNS] = {{34, -1, 879, 22},
        {24, 365, -101, -1},
        {-20, 40, 90, 97}
    };

    // iterate rows, each array of int
    for (int row = 0; row < NUM_ROWS; ++row)
    {
        // iterate integers in each row (columns)
        for (int column = 0; column < NUM_COLUMNS; ++column)
        {
            cout << "Integer[" << row << "][" << column
                 << "] = " << MyInts[row][column] << endl;
        }
    }

    return 0;
}

// Integer[0][0] = 34
// Integer[0][1] = -1
// Integer[0][2] = 879
// Integer[0][3] = 22
// Integer[1][0] = 24
// Integer[1][1] = 365
// Integer[1][2] = -101
// Integer[1][3] = -1
// Integer[2][0] = -20
// Integer[2][1] = 40
// Integer[2][2] = 90
// Integer[2][3] = 97
