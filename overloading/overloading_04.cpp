#include <iostream>

void foo(double)
{
	std::cout << "::foo(double)\n";
}

void foo(unsigned a)
{
	std::cout << "::foo(unsigned)\n";
}

namespace nec
{
	void foo(int)
	{
		std::cout << "nec::foo(int)\n";
	}

	void bar()
	{
		foo(4.1);	
	}
}

int main()
{
	nec::bar();
	foo(1.2);
	foo(5u);
}
