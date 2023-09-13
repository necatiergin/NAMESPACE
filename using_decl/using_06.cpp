#include <iostream>

namespace nec {
	namespace pro {
		void foo()
		{
			std::cout << "nec::foo()\n";
		}
	}
}


namespace erg {
	using nec::pro::foo;
}

int main()
{
	erg::foo();
}
