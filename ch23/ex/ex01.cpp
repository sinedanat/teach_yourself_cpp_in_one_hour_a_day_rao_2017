// Write a binary predicate that accepts strings
// as input arguments and returns a value
// based on case-insensitive comparison.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool CompareStringsCaseInsensitive(const std::string& str1,
                                   const std::string& str2)
{
    std::string lowStr1(str1);

    std::transform(str1.cbegin(), str1.cend(), lowStr1.begin(), ::tolower);

    std::string lowStr2(str2);

    std::transform(str2.cbegin(), str2.cend(), lowStr2.begin(), ::tolower);

    return (lowStr1 < lowStr2);
}

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
    {
        std::cout << *element << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> names{"Jack", "Anna", "jack", "Ed", "John"};

    std::cout << "Names before sort:" << std::endl;
    DisplayContents(names);

    std::sort(names.begin(), names.end());

    std::cout << "Names after sort as case-sensitive:" << std::endl;
    DisplayContents(names);

    std::sort(names.begin(), names.end(), CompareStringsCaseInsensitive);

    std::cout << "Names after sort as case-insensitive:" << std::endl;
    DisplayContents(names);

    return 0;
}

// Names before sort:
// Jack
// Anna
// jack
// Ed
// John
// 
// Names after sort as case-sensitive:
// Anna
// Ed
// Jack
// John
// jack
// 
// Names after sort as case-insensitive:
// Anna
// Ed
// Jack
// jack
// John
