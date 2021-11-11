#include <iostream>

void show(int* ptr)
{
    if(ptr)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
}

int main()
{
    int x = 123;
    int* ptr_x = &x;

    show(ptr_x);
    show(nullptr);
    show(NULL);

    return 0;
}

// yes
// no
// no
