#include <iostream>
#include <tuple>
#include <string>

using namespace std;

template<typename tupleType>
void DisplayTupleInfo(tupleType& tup)
{
    const int numMembers = tuple_size<tupleType>::value;
    cout << "Num elements in tuple: " << numMembers << endl;
    cout << "Last element value: " << get<numMembers - 1>(tup) << endl;
}

int main()
{
    tuple<int, char, string> tup1(make_tuple(101, 's', "Hello Tuple!"));
    DisplayTupleInfo(tup1);

    auto tup2(make_tuple(3.14, false));
    DisplayTupleInfo(tup2);

    // Contains tup2, tup1 members.
    auto concatTup(tuple_cat(tup2, tup1));
    DisplayTupleInfo(concatTup);

    double pi;
    string sentence;
    tie(pi, ignore, ignore, ignore, sentence) = concatTup;
    cout << "Unpacked! Pi: " << pi << " and \"" << sentence << "\"" << endl;

    return 0;
}

// Num elements in tuple: 3
// Last element value: Hello Tuple!
// Num elements in tuple: 2
// Last element value: 0
// Num elements in tuple: 5
// Last element value: Hello Tuple!
// Unpacked! Pi: 3.14 and "Hello Tuple!"
