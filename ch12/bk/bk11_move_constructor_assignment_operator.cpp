#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
private:
    char* buffer;

    MyString() : buffer(NULL) // Private default constructor.
    {
        cout << "Default constructor called" << endl;
    }

public:
    // Constructor.
    MyString(const char* initialInput)
    {
        cout << "Constructor called for: " << initialInput << endl;

        if (initialInput != NULL)
        {
            buffer = new char[strlen(initialInput) + 1];
            strcpy(buffer, initialInput);
        }
        else
        {
            buffer = NULL;
        }
    }

    // Move constructor.
    MyString(MyString&& moveSrc)
    {
        cout << "Move constructor moves: " << moveSrc.buffer << endl;

        if (moveSrc.buffer != NULL)
        {
            buffer = moveSrc.buffer; // take ownership i.e.  'move'
            moveSrc.buffer = NULL;    // free move source
        }
    }

    // Move assignment operator.
    MyString& operator=(MyString&& moveSrc)
    {
        cout << "Move assignment op. moves: " << moveSrc.buffer << endl;

        if ((moveSrc.buffer != NULL) && (this != &moveSrc))
        {
            delete[] buffer; // release own buffer

            buffer = moveSrc.buffer; // take ownership i.e.  'move'
            moveSrc.buffer = NULL;    // free move source
        }

        return *this;
    }

    // Copy constructor.
    MyString(const MyString& copySrc)
    {
        cout << "Copy constructor copies: " << copySrc.buffer << endl;

        if (copySrc.buffer != NULL)
        {
            buffer = new char[strlen(copySrc.buffer) + 1];
            strcpy(buffer, copySrc.buffer);
        }
        else
        {
            buffer = NULL;
        }
    }

    // Copy assignment operator.
    MyString& operator=(const MyString& copySrc)
    {
        cout << "Copy assignment op. copies: " << copySrc.buffer << endl;

        if ((this != &copySrc) && (copySrc.buffer != NULL))
        {
            if (buffer != NULL)
                delete[] buffer;

            buffer = new char[strlen(copySrc.buffer) + 1];
            strcpy(buffer, copySrc.buffer);
        }

        return *this;
    }

    // Destructor.
    ~MyString()
    {
        if (buffer != NULL)
            delete[] buffer;
    }

    int GetLength()
    {
        return strlen(buffer);
    }

    operator const char* ()
    {
        return buffer;
    }

    MyString operator+ (const MyString& addThis)
    {
        cout << "operator+ called: " << endl;
        MyString newStr;

        if (addThis.buffer != NULL)
        {
            newStr.buffer = new char[GetLength() + strlen(addThis.buffer) + 1];
            strcpy(newStr.buffer, buffer);
            strcat(newStr.buffer, addThis.buffer);
        }

        return newStr;
    }
};

int main()
{
    MyString Hello("Hello ");
    MyString World("World");
    MyString CPP(" of C++");

    MyString sayHelloAgain("overwrite this");
    sayHelloAgain = Hello + World + CPP;

    return 0;
}

/*
Without move constructor and move assignment operator:
Constructor called for: Hello
Constructor called for: World
Constructor called for:  of C++
Constructor called for: overwrite this
operator+ called:
Default constructor called
Copy constructor to copy from: Hello World
operator+ called:
Default constructor called
Copy constructor to copy from: Hello World of C++
Copy assignment operator to copy from: Hello World of C++

With move constructor and move assignment operators:
Constructor called for: Hello
Constructor called for: World
Constructor called for:  of C++
Constructor called for: overwrite this
operator+ called:
Default constructor called
Move constructor to move from: Hello World
operator+ called:
Default constructor called
Move constructor to move from: Hello World of C++
Move assignment operator to move from: Hello World of C++
*/

// Constructor called for: Hello
// Constructor called for: World
// Constructor called for:  of C++
// Constructor called for: overwrite this
// operator+ called:
// Default constructor called
// operator+ called:
// Default constructor called
// Move assignment op. moves: Hello World of C++
