#include <queue>
#include <list>

using namespace std;

int main()
{
    // A queue of integers.
    queue<int> numsInQ;

    // A queue of doubles.
    queue<double> dblsInQ;

    // A queue of doubles stored internally in a list.
    queue<double, list<double>> dblsInQInList;

    // One queue created as a copy of another.
    queue<int> copyQ(numsInQ);

    return 0;
}

//
