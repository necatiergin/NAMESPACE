#include <iostream>

namespace
{
	int x;

	void foo()
	{
		std::cout << "foo()\n";
	}
}

int main()
{
	x = 10;
	foo();

	std::cout << x << '\n';
	::x = 5;
	::foo();
}
