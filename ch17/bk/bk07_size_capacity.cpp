#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Instantiate a vector object that holds 5 integers of default value.
    vector<int> integers(5);

    cout << "Vector of integers was instantiated with " << endl;
    cout << "Size: " << integers.size();
    cout << ", Capacity: " <<  integers.capacity() << endl;

    // Inserting a 6th element in to the vector.
    integers.push_back(666);

    cout << "After inserting an additional element ... " << endl;
    cout << "Size: " << integers.size();
    cout << ", Capacity: " <<  integers.capacity() << endl;

    // Inserting another element.
    integers.push_back(777);

    cout << "After inserting yet another element ... " << endl;
    cout << "Size: " << integers.size();
    cout << ", Capacity: " <<  integers.capacity() << endl;

    integers.clear();

    cout << "After clearing ... " << endl;
    cout << "Size: " << integers.size();
    cout << ", Capacity: " <<  integers.capacity() << endl;

    return 0;
}

// Vector of integers was instantiated with 
// Size: 5, Capacity: 5
// After inserting an additional element ... 
// Size: 6, Capacity: 10
// After inserting yet another element ... 
// Size: 7, Capacity: 10
// After clearing ... 
// Size: 0, Capacity: 10
