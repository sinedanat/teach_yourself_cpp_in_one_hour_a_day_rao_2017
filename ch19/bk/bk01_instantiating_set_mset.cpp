#include <set>

using namespace std;

// Used as a template parameter in set / multiset instantiation.
template<typename T>
struct SortDescending
{
    bool operator()(const T& lhs, const T& rhs) const
    {
        return (lhs > rhs);
    }
};

int main()
{
    // A simple set or multiset of integers (using default sort predicate).
    set<int> setInts1;
    multiset<int> msetInts1;

    // Set and multiset instantiated given a user-defined sort predicate.
    set<int, SortDescending<int>> setInts2;
    multiset<int, SortDescending<int>> msetInts2;

    // Creating one set from another, or part of another container.
    set<int> setInts3(setInts1);
    multiset<int> msetInts3(setInts1.cbegin(), setInts1.cend());

    return 0;
}

//
