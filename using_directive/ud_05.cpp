#include <iostream>

namespace nec
{
	int x = 10;
}

int x = 20;

int main()
{
	using namespace nec;

	std::cout << x << '\n';		//error - ambiguous
}
