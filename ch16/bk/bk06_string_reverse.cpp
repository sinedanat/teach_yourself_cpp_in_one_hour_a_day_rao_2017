#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string sampleStr("Hello String! We will reverse you!");
    cout << "The original sample string is: " << endl;
    cout << sampleStr << endl << endl;

    reverse(sampleStr.begin(), sampleStr.end());

    cout << "After applying the std::reverse algorithm: " << endl;
    cout << sampleStr << endl;

    return 0;
}

// The original sample string is: 
// Hello String! We will reverse you!
// 
// After applying the std::reverse algorithm: 
// !uoy esrever lliw eW !gnirtS olleH
