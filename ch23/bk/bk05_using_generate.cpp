#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    vector<int> numsInVec(5);

    generate(numsInVec.begin(), numsInVec.end(),  // Range.
             rand); // Generator function.

    cout << "Elements in the vector are: ";

    for (size_t index = 0; index < numsInVec.size(); ++index)
        cout << numsInVec[index] << " ";

    cout << endl;

    list<int> numsInList(5);

    generate_n(numsInList.begin(), 3, rand);

    cout << "Elements in the list are: ";

    for (auto element = numsInList.cbegin();
            element != numsInList.cend();
            ++element)
        cout << *element << ' ';

    cout << endl;

    return 0;
}

// Elements in the vector are: 22187 9991 22555 2963 21890 
// Elements in the list are: 24929 31914 14929 0 0 
