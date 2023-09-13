#include <iostream>

namespace Nec {
	struct X{};
	void func(X) { std::cout << "Nec::func(X)\n"; }
}

class Myclass {
public:
	void func(Nec::X) { std::cout << "Myclass::func(Nec::X)\n";}
	
	void foo()
	{
		Nec::X ax;
		func(ax); //no ADL
	}
};

int main()
{
	Myclass mx;
	mx.foo();
}
