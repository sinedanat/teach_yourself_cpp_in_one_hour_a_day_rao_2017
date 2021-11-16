#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1("Traditional string \0 initialization");
    cout << "str1: " << str1 << " Length: " << str1.length() << endl;

    string str2("C++14 \0 initialization using literals"s);
    cout << "str2: " << str2 << " Length: " << str2.length() << endl;

    return 0;
}

// str1: Traditional string  Length: 19
// str2: C++14   initialization using literals Length: 37
