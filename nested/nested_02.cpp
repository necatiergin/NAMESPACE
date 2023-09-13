#include <iostream>

namespace Enc {

	void foo(int)
	{
		std::cout << "Enc::foo(int)\n";
	}

	namespace Nested {
		void foo()
		{
			std::cout << "Enc::Nested::foo()\n";
		}

		void func()
		{
			//foo(10); //invalid
			foo();
			Enc::foo(10);
		}

	}
}

int main()
{
	Enc::Nested::func();
}
