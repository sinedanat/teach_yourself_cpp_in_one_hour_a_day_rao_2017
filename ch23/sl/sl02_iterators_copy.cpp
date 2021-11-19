#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> listNames;
    listNames.push_back("Jack");
    listNames.push_back("John");
    listNames.push_back("Anna");
    listNames.push_back("Skate");

    vector<string> vecNames(4);
    copy(listNames.cbegin(), listNames.cend(), vecNames.begin());

    vector<string>::const_iterator iNames;

    for (iNames = vecNames.begin(); iNames != vecNames.end(); ++iNames)
        cout << *iNames << ' ';

    cout << endl;

    return 0;
}

// Jack John Anna Skate 
