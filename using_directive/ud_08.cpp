#include <iostream>

namespace nec
{
	int x = 10;
	//...
}

namespace erg
{
	using namespace nec;
	//...
}

int main()
{
	std::cout << erg::x << '\n';
}
