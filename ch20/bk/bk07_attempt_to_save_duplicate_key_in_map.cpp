#include <iostream>
#include <map>
#include <string>

using namespace std;

template<typename T>
void DisplayContents(const T& cont)
{
    for (auto element = cont.cbegin();
            element != cont.cend();
            ++element)
    {
        cout << element->first << " -> " << element->second << endl;
    }

    cout << endl;
}

int main()
{
    map<int, string> mapIntToStr;

    mapIntToStr.insert(make_pair(7, "Seven"));
    mapIntToStr.insert(make_pair(7, "Seven Again"));

    DisplayContents(mapIntToStr);

    return 0;
}

// 7 -> Seven
