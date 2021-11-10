// Write a switch-case construct that tells
// if a color is in the rainbow or otherwise.
// Use enumerated constants.

#include <iostream>

enum Colors
{
    Violet = 0,
    Indigo,
    Blue,
    Green,
    Yellow,
    Orange,
    Red,
    Black,
    White,
    Pink
};

int main()
{
    Colors arrColors[] = {Violet, Indigo, Blue, Green, Yellow,
                          Orange, Red, Black, White, Pink
                         };

    for (auto color : arrColors)
    {

        switch (color)
        {
            case Violet:
            case Indigo:
            case Blue:
            case Green:
            case Yellow:
            case Orange:
            case Red:
                std::cout << "yes" << std::endl;
                break;

            default:
                std::cout << "no" << std::endl;
        }
    }

    return 0;
}

// yes
// yes
// yes
// yes
// yes
// yes
// yes
// no
// no
// no
