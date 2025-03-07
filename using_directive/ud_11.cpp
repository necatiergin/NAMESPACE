#include <iostream>

namespace A
{
	namespace B
	{
		namespace C
		{
			int x = 5;
		}
	}

	using namespace B::C;
	//...
}


int main()
{
	std::cout << A::x; //valid
	//std::cout << A::B::x; //invalid
	std::cout << A::B::C::x; //valid
}
