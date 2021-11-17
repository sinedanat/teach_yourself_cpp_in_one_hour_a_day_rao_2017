// Extend the telephone directory example in this lesson
// to find a person's name given a phone number.
// (Hint: Adjust operators < and == and ensure that items are sorted
// and compared according to phone numbers.)

#include <iostream>
#include <set>
#include <string>

using namespace std;

template<typename T>
void DisplayContents(const T& Input)
{
    for (auto element = Input.cbegin();
            element != Input.cend();
            ++ element)
        cout << *element << endl;

    cout << endl;
}

struct ContactItem
{
    string name;
    string phoneNum;
    string displayAs;

    ContactItem(const string& nameInit, const string& phone)
    {
        name = nameInit;
        phoneNum = phone;
        displayAs = (name + ": " + phoneNum);
    }

    // Used by set::find() given contact list item.
    bool operator==(const ContactItem& itemToCompare) const
    {
        return (this->phoneNum == itemToCompare.phoneNum);
    }

    // Used to sort.
    bool operator<(const ContactItem& itemToCompare) const
    {
        return (this->phoneNum < itemToCompare.phoneNum);
    }

    // Used in DisplayContents via cout.
    operator const char* () const
    {
        return displayAs.c_str();
    }
};

int main()
{
    set<ContactItem> setContacts;
    setContacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
    setContacts.insert(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
    setContacts.insert(ContactItem("Angi Merkel", "+49 23456 5466"));
    setContacts.insert(ContactItem("Vlad Putin", "+7 6645 4564 797"));
    setContacts.insert(ContactItem("John Travolta", "91 234 4564 789"));
    setContacts.insert(ContactItem("Ben Affleck", "+1 745 641 314"));
    DisplayContents(setContacts);

    cout << "Enter a phone to find a preson: ";
    string phoneNum;
    getline(cin, phoneNum);

    auto contactFound = setContacts.find(ContactItem("", phoneNum));

    if (contactFound != setContacts.cend())
    {
        cout << "Contact found." << endl;
        cout << *contactFound << endl;
    }
    else
    {
        cout << "Contact not found." << endl;
    }

    return 0;
}

// Ben Affleck: +1 745 641 314
// Jack Welsch: +1 7889 879 879
// Bill Gates: +1 97 7897 8799 8
// Angi Merkel: +49 23456 5466
// Vlad Putin: +7 6645 4564 797
// John Travolta: 91 234 4564 789
//
// Enter a phone to find a preson: +7 6645 4564 797
// Contact found.
// Vlad Putin: +7 6645 4564 797
