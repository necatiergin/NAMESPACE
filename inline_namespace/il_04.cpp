//#define USE_INLINE_Y

namespace X {
#ifdef USE_INLINE_Y
    inline
#endif
    namespace Y {
        const char* func(bool) 
        {
            return "bool"; 
        }
    }
    const char* func(int) 
    {
        return "int"; 
    }
}

#include <iostream>

int main(void) 
{
    std::cout << X::func(true);
}


