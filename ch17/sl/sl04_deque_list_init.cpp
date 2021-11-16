#include <iostream>
#include <deque>
#include <string>

using namespace std;

template<typename T>
void DisplayDeque(deque<T> inDQ)
{
    for (auto element = inDQ.cbegin();
            element != inDQ.cend();
            ++element)
        cout << *element << endl;
}

int main()
{
    deque<string> strDq{ "Hello"s, "Containers are cool"s, "C++ is evolving!"s };
    
    DisplayDeque(strDq);

    return 0;
}

// Hello
// Containers are cool
// C++ is evolving!
