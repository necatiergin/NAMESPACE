#include <iostream>

namespace Nec {
	void func(int)
	{
		std::cout << "void Nec::func(int)\n";
	}

	void func(double)
	{
		std::cout << "void Nec::func(double)\n";
	}
}

int func()
{
	std::cout << "int func()\n";
	return 1;
}

int main()
{
	using Nec::func;

	//func(); //gecersiz
	func(12);
	func(2.5);
	::func();
}
