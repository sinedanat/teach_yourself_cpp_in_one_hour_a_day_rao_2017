#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MyString
{
private:
    char* buffer;

    // Private default constructor.
    MyString() {}

public:
    // Constructor.
    MyString(const char* InitialInput)
    {
        if (InitialInput != NULL)
        {
            buffer = new char [strlen(InitialInput) + 1];
            strcpy(buffer, InitialInput);
        }
        else
            buffer = NULL;
    }

    MyString operator+(const char* stringIn)
    {
        string strBuf(buffer);
        strBuf += stringIn;
        MyString ret(strBuf.c_str());
        return ret;
    }

    // Copy constructor.
    MyString(const MyString& CopySource)
    {
        if (CopySource.buffer != NULL)
        {
            // Ensure deep copy by first allocating own buffer.
            buffer = new char [strlen(CopySource.buffer) + 1];

            // Copy from the source into local buffer.
            strcpy(buffer, CopySource.buffer);
        }
        else
        {
            buffer = NULL;
        }
    }

    // Copy assignment operator.
    MyString& operator=(const MyString& CopySource)
    {
        if ((this != &CopySource) && (CopySource.buffer != NULL))
        {
            if (buffer != NULL)
                delete[] buffer;

            // Ensure deep copy by first allocating own buffer.
            buffer = new char [strlen(CopySource.buffer) + 1];

            // Copy from the source into local buffer.
            strcpy(buffer, CopySource.buffer);
        }

        return *this;
    }

    const char& operator[](int Index) const
    {
        if (Index < GetLength())
            return buffer[Index];
    }

    // Destructor.
    ~MyString()
    {
        if (buffer != NULL)
            delete[] buffer;
    }

    int GetLength() const
    {
        return strlen(buffer);
    }

    operator const char*()
    {
        return buffer;
    }
};

int main()
{
    cout << "Type a statement: ";
    string strInput;
    getline(cin, strInput);

    MyString youSaid(strInput.c_str());

    cout << "Using operator[] for displaying your input: " << endl;

    for (int index = 0; index < youSaid.GetLength(); ++index)
        cout << youSaid[index] << " ";

    cout << endl;

    cout << "Enter index 0 - " << youSaid.GetLength() - 1 << ": ";
    int index = 0;
    cin >> index;
    cout << "Input character at zero-based position: " << index;
    cout << " is: " << youSaid[index] << endl;

    return 0;
}

// Type a statement: Day by day ...
// Using operator[] for displaying your input:
// D a y   b y   d a y   . . .
// Enter index 0 - 13: 2
// Input character at zero-based position: 2 is: y
