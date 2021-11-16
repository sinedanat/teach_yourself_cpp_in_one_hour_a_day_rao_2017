// Write an application that initializes a deque
// to the following three strings:
// "Hello", "Containers are cool!", and "C++ is evolving!".
// You must display them using a generic function
// that would work for a deque of all kinds.
// Your application needs to demonstrate the usage of List Initialization
// introduced by C++11 and the operator ""s introduced by C++14.

#include <iostream>
#include <deque>
#include <string>

using namespace std::string_literals;

template<typename T>
void DisplayDeque(const std::deque<T>& deq)
{
    for (size_t i = 0; i < deq.size(); ++i)
    {
        std::cout << deq[i] << std::endl;
    }
}

int main()
{
    std::deque<std::string> deq{"Hello",
                                "Containers are cool!",
                                "C++ is evolving!"};

    // Using string literals.
    std::string str("Wow!"s);

    deq.push_back(str);

    std::cout << "Display deque:" << std::endl;

    DisplayDeque(deq);

    return 0;
}

// Display deque:
// Hello
// Containers are cool!
// C++ is evolving!
// Wow!
