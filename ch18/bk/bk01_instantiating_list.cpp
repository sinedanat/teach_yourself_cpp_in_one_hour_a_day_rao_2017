#include <list>
#include <vector>

int main()
{
    using namespace std;

    // Instantiate an empty list.
    list<int> listIntegers;

    // Instantiate a list with 10 integers.
    list<int> listWith10Integers(10);

    // Instantiate a list with 4 integers, each initialized to 99.
    list<int> listWith4IntegerEach99(4, 99);

    // Create an exact copy of an existing list.
    list<int> listCopyAnother(listWith4IntegerEach99);

    // A vector with 10 integers, each 2017.
    vector<int> vecIntegers(10, 2017);

    // Instantiate a list using values from another container.
    list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());

    return 0;
}

//
