#include <iostream>


namespace nec
{
	void foo(int nec)
	{
		std::cout << "nec::foo(int)" << '\n';
	}
}

namespace erg
{
	using namespace nec;

	void foo(long nec)
	{
		std::cout << "erg::foo(long)" << '\n';
	}
}

void foo(double nec)
{
	std::cout << "::foo(double)" << '\n';
}

using namespace erg;

int main()
{
	foo(10);		// nec::foo 
	foo(10L);		// erg::foo 
	foo(3.14);		// ::foo 
}
