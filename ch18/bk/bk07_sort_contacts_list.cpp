#include <iostream>
#include <list>
#include <string>

using namespace std;

template<typename T>
void displayAsContents(const T& container)
{
    for (auto element = container.cbegin();
            element != container.cend();
            ++element)
        cout << *element << endl;

    cout << endl;
}

struct ContactItem
{
    string name;
    string phone;
    string displayAs;

    ContactItem(const string& conName, const string& conNum)
    {
        name = conName;
        phone = conNum;
        displayAs = (name + ": " + phone);
    }

    // Used by list::remove() given contact list item.
    bool operator==(const ContactItem& itemToCompare) const
    {
        return (this->name == itemToCompare.name);
    }

    // Used by list::sort() without parameters.
    bool operator<(const ContactItem& itemToCompare) const
    {
        return (this->name < itemToCompare.name);
    }

    // Used in displayAsContents via cout.
    operator const char*() const
    {
        return displayAs.c_str();
    }
};

bool SortOnPhoneNumber(const ContactItem& item1,
                       const ContactItem& item2)
{
    return (item1.phone < item2.phone);
}

int main()
{
    list<ContactItem> contacts;
    contacts.push_back(ContactItem("Jack Welsch", "+1 7889879879"));
    contacts.push_back(ContactItem("Bill Gates", "+1 97 789787998"));
    contacts.push_back(ContactItem("Angi Merkel", "+49 234565466"));
    contacts.push_back(ContactItem("Vlad Putin", "+7 66454564797"));
    contacts.push_back(ContactItem("Ben Affleck", "+1 745641314"));
    contacts.push_back(ContactItem("Dan Craig", "+44 123641976"));

    cout << "List in initial order: " << endl;
    displayAsContents(contacts);

    contacts.sort();
    cout << "Sorting in alphabetical order via operator<:" << endl;
    displayAsContents(contacts);

    contacts.sort(SortOnPhoneNumber);
    cout << "Sorting in order of phone numbers via predicate:" << endl;
    displayAsContents(contacts);

    cout << "After erasing Putin from the list: " << endl;
    contacts.remove(ContactItem("Vlad Putin", ""));
    displayAsContents(contacts);

    return 0;
}

// List in initial order: 
// Jack Welsch: +1 7889879879
// Bill Gates: +1 97 789787998
// Angi Merkel: +49 234565466
// Vlad Putin: +7 66454564797
// Ben Affleck: +1 745641314
// Dan Craig: +44 123641976

// Sorting in alphabetical order via operator<:
// Angi Merkel: +49 234565466
// Ben Affleck: +1 745641314
// Bill Gates: +1 97 789787998
// Dan Craig: +44 123641976
// Jack Welsch: +1 7889879879
// Vlad Putin: +7 66454564797

// Sorting in order of phone numbers via predicate:
// Ben Affleck: +1 745641314
// Jack Welsch: +1 7889879879
// Bill Gates: +1 97 789787998
// Dan Craig: +44 123641976
// Angi Merkel: +49 234565466
// Vlad Putin: +7 66454564797

// After erasing Putin from the list: 
// Ben Affleck: +1 745641314
// Jack Welsch: +1 7889879879
// Bill Gates: +1 97 789787998
// Dan Craig: +44 123641976
// Angi Merkel: +49 234565466
