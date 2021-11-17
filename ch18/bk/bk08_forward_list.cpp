#include<iostream>
#include<forward_list>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
        cout << *element << ' ';

    cout << endl;
}

int main()
{
    forward_list<int> flistIntegers{3, 4, 2, 2, 0};
    flistIntegers.push_front(1);

    cout << "Contents of forward_list: " << endl;
    DisplayContents(flistIntegers);

    flistIntegers.remove(2);
    flistIntegers.sort();
    cout << "Contents after removing 2 and sorting: " << endl;
    DisplayContents(flistIntegers);

    return 0;
}

// Contents of forward_list: 
// 1 3 4 2 2 0 
// Contents after removing 2 and sorting: 
// 0 1 3 4 
