#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<int> integers;

    // // Insert sample integers into the vector.
    // integers.push_back(50);
    // integers.push_back(1);
    // integers.push_back(987);
    // integers.push_back(1001);


    // Using List Initialization.
    vector<int> integers{50, 1, 987, 1001};

    cout << "The vector contains ";
    cout << integers.size() << " Elements" << endl;

    return 0;
}

// The vector contains 4 Elements
