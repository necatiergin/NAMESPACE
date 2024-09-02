#include <iostream>

namespace nec
{
    int a = 21;

    void foo()
    {
        std::cout << "nec::foo" << '\n';
    }
}

namespace erg
{
    int a = 43;

    void foo()
    {
        std::cout << "erg::foo" << '\n';
    }
}

int main()
{
    std::cout << nec::a << '\n';
    std::cout << erg::a << '\n';

    nec::foo();
    erg::foo();
}
