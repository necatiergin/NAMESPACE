#include <iostream>

namespace Erg
{
	int x = 10;
}

int x = 20;

int main()
{
	int x = 100;

	using namespace Erg;

	std::cout << "x = " << x << '\n';
}
