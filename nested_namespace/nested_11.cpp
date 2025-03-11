#include <iostream>

namespace nec
{
	namespace erg
	{
		void foo();
		//...
	}
}

void nec::erg::foo()		// valid
{
	std::cout << "nec::erg::foo()\n";
}

int main()
{
	nec::erg::foo();
}
