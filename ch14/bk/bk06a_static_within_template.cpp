#include <iostream>

using namespace std;

template<typename T>
class TestStatic
{
public:
    static int staticVal;
};

// Static member initialization.
template<typename T> int TestStatic<T>::staticVal;

int main()
{
    TestStatic<int> intInstance;
    cout << "Setting staticVal for intInstance to 2011" << endl;
    intInstance.staticVal = 2011;

    TestStatic<double> dblInstance;
    cout << "Setting staticVal for dblInstance to 1011" << endl;
    dblInstance.staticVal = 1011;

    cout << "intInstance.staticVal = " << intInstance.staticVal << endl;
    cout << "dblInstance.staticVal = " << dblInstance.staticVal << endl;

    return 0;
}

// Setting staticVal for intInstance to 2011
// Setting staticVal for dblInstance to 1011
// intInstance.staticVal = 2011
// dblInstance.staticVal = 1011
