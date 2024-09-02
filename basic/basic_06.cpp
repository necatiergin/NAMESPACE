#include <iostream>

namespace nec
{
	void foo();
	//...
}

void nec::foo()		// valid
{
	std::cout << "nec::foo()\n";
}

int main()
{
	nec::foo();
}
