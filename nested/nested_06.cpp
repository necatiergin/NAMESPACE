#include <iostream>

namespace A
{
	namespace B
	{
		int x = 5;
	}
}

namespace A {
	namespace B
	{
		int y = 78;
	}
}

int main()
{
	std::cout << A::B::x << '\n';
	std::cout << A::B::y << '\n';
}
