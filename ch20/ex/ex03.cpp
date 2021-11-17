// Demonstrate via a simple program
// that a map cannot accept duplicate entries,
// whereas a multimap can.
// Take a hint from the similarly solved Exercise 3
// in Lesson 19, "STL Set Classes".

#include <iostream>
#include <map>
#include <string>
#include <utility>

template<typename T>
void DisplayContents(const T& cont)
{
    for (auto element = cont.cbegin();
            element != cont.cend();
            ++element)
    {
        std::cout << element->first << " -> " << element->second << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    std::map<int, std::string> mapInts;
    mapInts.insert(std::make_pair(1, "One"));
    mapInts.insert(std::make_pair(2, "Two"));
    mapInts.insert(std::make_pair(2, "Two"));
    mapInts.insert(std::make_pair(3, "Three"));
    mapInts.insert(std::make_pair(3, "Three"));
    mapInts.insert(std::make_pair(3, "Three"));
    std::cout << "Contents of the map: " << std::endl;
    DisplayContents(mapInts);

    std::multimap<int, std::string> mmapInts;
    mmapInts.insert(std::make_pair(1, "One"));
    mmapInts.insert(std::make_pair(2, "Two"));
    mmapInts.insert(std::make_pair(2, "Two"));
    mmapInts.insert(std::make_pair(3, "Three"));
    mmapInts.insert(std::make_pair(3, "Three"));
    mmapInts.insert(std::make_pair(3, "Three"));
    std::cout << "Contents of the multimap: " << std::endl;
    DisplayContents(mmapInts);

    return 0;
}

// Contents of the map: 
// 1 -> One
// 2 -> Two
// 3 -> Three

// Contents of the multimap: 
// 1 -> One
// 2 -> Two
// 2 -> Two
// 3 -> Three
// 3 -> Three
// 3 -> Three
