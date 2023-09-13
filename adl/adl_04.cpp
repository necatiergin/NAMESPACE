#include <iostream>

namespace Enc {
	struct S {};
	void foo(S)
	{
		std::cout << "Enc::foo(S)\n";
	}

	namespace Nested {
		void foo()
		{
			std::cout << "Enc::Nested::foo()\n";
		}

		void func()
		{
			S ss;
			foo(ss);
		}
	}
}

int main()
{
	Enc::Nested::func(); //valid
}
