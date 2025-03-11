#include <iostream>

namespace nec
{
	int x = 3;

	namespace nested
	{
		int x = 5;

		void foo()
		{
			std::cout << x << '\n';
			std::cout << nec::x << '\n';
		}
	}
}


int main()
{
	nec::nested::foo();
}
