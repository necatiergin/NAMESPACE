#include <iostream>

namespace erg
{
	int x = 10;
}

int x = 20;

int main()
{
	int x = 100;

	using namespace erg;

	std::cout << "x = " << x << '\n';	//100 - name hiding
}
