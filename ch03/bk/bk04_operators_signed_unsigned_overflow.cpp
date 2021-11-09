#include <iostream>
using namespace std;

int main()
{
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;

    short signedShort = 32767;
    cout << "Incrementing signed short " << signedShort << " gives: ";
    cout << ++signedShort << endl;

    return 0;
}

// Incrementing unsigned short 65535 gives: 0
// Incrementing signed short 32767 gives: -32768
