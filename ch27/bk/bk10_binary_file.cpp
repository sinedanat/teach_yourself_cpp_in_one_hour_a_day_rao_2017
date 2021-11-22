#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

struct Human
{
    Human() {};
    Human(const char* inName, int inAge, const char* inDOB) : age(inAge)
    {
        strcpy(name, inName);
        strcpy(DOB, inDOB);
    }

    char name[30];
    int age;
    char DOB[20];
};

int main()
{
    Human input("Siddhartha Rao", 101, "May 1916");

    ofstream fsOut("MyBinary.bin", ios_base::out | ios_base::binary);

    if (fsOut.is_open())
    {
        cout << "Writing one object of Human to a binary file" << endl;
        fsOut.write(reinterpret_cast<const char*>(&input), sizeof(input));

        fsOut.close();
    }

    ifstream fsIn("MyBinary.bin", ios_base::in | ios_base::binary);

    if (fsIn.is_open())
    {
        Human somePerson;
        fsIn.read((char*)&somePerson, sizeof(somePerson));

        cout << "Reading information from binary file: " << endl;
        cout << "Name = " << somePerson.name << endl;
        cout << "Age = " << somePerson.age << endl;
        cout << "Date of Birth = " << somePerson.DOB << endl;
        
        fsIn.close();
    }

    return 0;
}

// Writing one object of Human to a binary file
// Reading information from binary file: 
// Name = Siddhartha Rao
// Age = 101
// Date of Birth = May 1916
