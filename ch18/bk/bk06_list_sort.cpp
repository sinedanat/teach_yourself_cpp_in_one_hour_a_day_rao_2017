#include <iostream>
#include <list>

using namespace std;

bool SortPredicate_Descending(const int& lhs, const int& rhs)
{
    // Define criteria for list::sort: return true for desired order.
    return (lhs > rhs);
}

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
    list<int> linkInts{0, -1, 2011, 444, -5};

    cout << "Initial contents of the list are: " << endl;
    DisplayContents(linkInts);

    linkInts.sort();

    cout << "Order after sort():" << endl;
    DisplayContents(linkInts);

    linkInts.sort(SortPredicate_Descending);
    cout << "Order after sort() with a predicate:" << endl;
    DisplayContents(linkInts);

    return 0;
}

// Initial contents of the list are: 
// 0 -1 2011 444 -5 
// Order after sort():
// -5 -1 0 444 2011 
// Order after sort() with a predicate:
// 2011 444 0 -1 -5 
