#include <iostream>

namespace nec{
	void foo()
	{
		std::cout << "nec::foo()\n";
	}
	namespace erg {
		void foo()
		{
			std::cout << "erg::foo()\n";
		}

		namespace asl {
			void foo()
			{
				std::cout << "asl::foo()\n";
			}
		}
	}
}

int main()
{
	nec::foo();
	nec::erg::foo();
	nec::erg::asl::foo();
}

