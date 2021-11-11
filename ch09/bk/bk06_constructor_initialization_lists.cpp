#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string humansName = "Adam", int humansAge = 25)
        : name(humansName), age(humansAge)
    {
        cout << "Constructed a human called ";
        cout << name << " of age " << age << endl;
    }
};

int main()
{
    Human adam;
    Human eve("Eve", 18);

    return 0;
}

// Constructed a human called Adam, 25 years old
// Constructed a human called Eve, 18 years old
