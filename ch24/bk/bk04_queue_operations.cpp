#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> numsInQ;

    // Elements are inserted at the end.
    cout << "Inserting {10, 5, -1, 20} into queue" << endl;
    numsInQ.push(10);
    numsInQ.push(5);
    numsInQ.push(-1);
    numsInQ.push(20);

    cout << "Queue contains " << numsInQ.size() << " elements" << endl;
    cout << "Element at front: " << numsInQ.front() << endl;
    cout << "Element at back: " << numsInQ.back() << endl;

    while (numsInQ.size() != 0)
    {
        cout << "Deleting element: " << numsInQ.front() << endl;

        // Removes element at front.
        numsInQ.pop();
    }

    if (numsInQ.empty())
        cout << "The queue is now empty!" << endl;

    return 0;
}
