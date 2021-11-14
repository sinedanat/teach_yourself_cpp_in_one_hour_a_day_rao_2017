#include <iostream>

using namespace std;

struct Temperature
{
    long double kelvin;
    Temperature(long double newKelvin) : kelvin(newKelvin) {}
};

Temperature operator""_C(long double celcius)
{
    return Temperature(celcius + 273);
}

Temperature operator""_F(long double fahrenheit)
{
    return Temperature((fahrenheit + 459.67) * 5 / 9);
}

int main()
{
    Temperature k1 = 31.73_F;
    Temperature k2 = 0.0_C;

    cout << "k1 is " << k1.kelvin << " Kelvin" << endl;
    cout << "k2 is " << k2.kelvin << " Kelvin" << endl;

    return 0;
}

// k1 is 273 Kelvin
// k2 is 273 Kelvin
