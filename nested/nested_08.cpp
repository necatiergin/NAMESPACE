#include <iostream>

void foo()
{
	std::cout << "::foo" << '\n';
}

namespace nec
{
	void foo()
	{
		std::cout << "nec::foo" << '\n';
	}

	void bar()
	{
		foo();		// nec::foo
		::foo();	// global foo
	}
}

int main()
{
	nec::bar();
	foo();
	::foo();
}
