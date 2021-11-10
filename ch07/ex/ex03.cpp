// BUG BUSTERS: What is wrong with the following code?
// #include <iostream>
// using namespace std;
// const double Pi = 3.1416;
// void Area(double radius, double result)
// {
// result = Pi * radius * radius;
// }
// int main()
// {
// cout << "Enter radius: ";
// double radius = 0;
// cin >> radius;
// double areaFetched = 0;
// Area(radius, areaFetched);
// cout << "The area is: " << areaFetched << endl;
// return 0;
// }

// Parameter result should be a reference to double:
// void Area(double radius, double& result)

#include <iostream>

using namespace std;

const double Pi = 3.1416;

void Area(double radius, double& result)
{
    result = Pi * radius * radius;
}

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    double areaFetched = 0;

    Area(radius, areaFetched);

    cout << "The area is: " << areaFetched << endl;

    return 0;
}

// Enter radius: 10
// The area is: 314.16
