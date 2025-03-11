#include <iostream>

namespace nec
{
	namespace erg
	{
		void foo();
		//...
	}

	void erg::foo()		// valid
	{
		std::cout << "nec::erg::foo()\n";
	}
}

int main()
{
	nec::erg::foo();
}
