#include <iostream>

using namespace std;

int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {35, -3, 0};
    int MyInts2[ARRAY2_LEN] = {20, -1};

    cout << "Adding each int in myNums1 by each in MyInts2:" << endl;

    for (int index1 = ARRAY1_LEN - 1; index1 >= 0; --index1)
        for (int index2 = ARRAY2_LEN - 1; index2 >= 0; --index2)
            cout << myNums1[index1] << " + " << MyInts2[index2] \
                 << " = " << myNums1[index1] + MyInts2[index2] << endl;

    return 0;
}

// Adding each int in myNums1 by each in MyInts2:
// 0 + -1 = -1
// 0 + 20 = 20
// -3 + -1 = -4
// -3 + 20 = 17
// 35 + -1 = 34
// 35 + 20 = 55
