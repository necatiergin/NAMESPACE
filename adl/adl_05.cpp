#include <vector>
#include <iostream>

namespace A {
	class B{};
	void func(std::vector<B>) 
	{
		std::cout << "A::func(std::vector<A::B>)\n";
	}
}

int main()
{
	std::vector<A::B> x;

	func(x); //ADL works here
}
