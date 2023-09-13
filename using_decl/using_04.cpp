#include <iostream>

namespace nec{
	void foo()
	{
		std::cout << "nec::foo()\n";
	}
}


namespace erg {
	using nec::foo;
}

int main()
{
	erg::foo();
}
