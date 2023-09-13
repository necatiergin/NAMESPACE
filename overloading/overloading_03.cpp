#include <iostream>

namespace A {
	void f(int)
	{
		std::cout << "A::f(int)\n";
	}
}

namespace B {
	void f()
	{
		std::cout << "B::f()\n";
	}
}

int main()
{
	using A::f;
	using B::f;
	f(12); //valid  A::f
	f(); //valid B::f
}
