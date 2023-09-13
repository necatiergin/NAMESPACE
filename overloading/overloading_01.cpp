#include <iostream>

namespace Nec {
	void func(int)
	{
		std::cout << "void Nec::func(int)\n";
	}
	//...
}

namespace Ali {
	void func(double)
	{
		std::cout << "void Ali::func(double)\n";
	}
	//...
}

//void func(int)
//{
//	std::cout << "void func(int)\n";
//}

using namespace Nec;
using namespace Ali;

int main()
{
	::func(123);
}
