#include <iostream>

namespace lib {
    inline namespace v2 {
        void process(double) 
        {
            std::cout << "v2::process(double)\n";
        }
    }

    inline namespace v1 
    {
        void process(int) {
            std::cout << "v1::process(int)\n";
        }
    }
}


int main()
{
    lib::process(42);
    lib::process(3.14);
}
