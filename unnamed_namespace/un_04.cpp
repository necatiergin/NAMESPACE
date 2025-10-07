#include <iostream>

namespace
{
	int x = 5;
}

namespace
{
	int y = 3;
}

namespace {
	int z = 1;
}

int main()
{
	x += y * z;

	std::cout << "x = " << x << '\n';

}
