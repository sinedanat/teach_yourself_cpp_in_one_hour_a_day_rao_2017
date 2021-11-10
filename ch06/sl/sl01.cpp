#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_LEN = 5;
    int myNums[ARRAY_LEN] = {-55, 45, 9889, 0, 45};

    for (int index = ARRAY_LEN - 1; index >= 0; --index)
        cout << "myNums[" << index << "] = " << myNums[index] << endl;

    return 0;
}

// myNums[4] = 45
// myNums[3] = 0
// myNums[2] = 9889
// myNums[1] = 45
// myNums[0] = -55
