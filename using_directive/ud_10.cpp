#include <iostream>

namespace A
{
	namespace B
	{
		int x = 5;
	}

	using namespace B;
	//...
}

int main()
{
	std::cout << A::x << '\n';
	// std::cout << x << '\n'; //invalid
}
