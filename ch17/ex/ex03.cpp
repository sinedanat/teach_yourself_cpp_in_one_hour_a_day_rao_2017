// Jack sells jars on eBay. To help him with packaging and shipment,
// write a program in which he can enter the dimensions
// of each of these articles, store them in a vector,
// and have them printed on the screen.

#include <iostream>
#include <vector>

class Jar
{
public:
    Jar(int newHeight, int newWidth)
        : height(newHeight), width(newWidth) {}
    void DisplayJar() const
    {
        std::cout << "Jar has height = " << height <<
                  " and width = " << width << std::endl;
    }
private:
    int height;
    int width;
};

template<typename T>
void DisplayJars(const std::vector<T>& vect)
{
    for (size_t i = 0; i < vect.size(); ++i)
    {
        std::cout << "[" << i << "]: ";

        vect[i].DisplayJar();
    }
}

int main()
{
    std::vector<Jar> jars;

    char ch = 'y';

    do
    {
        std::cout << "Enter height: ";
        int height = 0;
        std::cin >> height;

        std::cout << "Enter width: ";
        int width = 0;
        std::cin >> width;

        Jar jar(height, width);
        jars.push_back(jar);

        std::cout << "Would you like to enter one more jar (y/n): ";
        std::cin >> ch;
    }
    while (ch != 'n');

    std::cout << "You entered: " << std::endl;

    DisplayJars(jars);

    return 0;
}

// Enter height: 123
// Enter width: 456
// Would you like to enter one more jar (y/n): n
// You entered:
// [0]: Jar has height = 123 and width = 456
// 
// Enter height: 1
// Enter width: 11
// Would you like to enter one more jar (y/n): y
// Enter height: 2
// Enter width: 22
// Would you like to enter one more jar (y/n): y
// Enter height: 3
// Enter width: 33
// Would you like to enter one more jar (y/n): n
// You entered:
// [0]: Jar has height = 1 and width = 11
// [1]: Jar has height = 2 and width = 22
// [2]: Jar has height = 3 and width = 33
