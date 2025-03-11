#include <iostream>

namespace nec
{
	int x = 10;
}

int x = 20;

int main()
{
	using namespace nec;

	//std::cout << x << '\n';		//error - ambiguous
	std::cout << ::x << '\n';		//valid, x in global namespace
	std::cout << nec::x << '\n';	//valid, x in nec namespace
}
