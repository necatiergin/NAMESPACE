#include <iostream>

namespace nec
{
	void foo(const char* str)
	{
		std::cout << "nec::foo const char *" << '\n';
	}

	namespace erg
	{
		void foo(double nec)
		{
			std::cout << "nec::erg::foo(double)\n";
		}

		namespace asl
		{
			void foo(int nec)
			{
				std::cout << "nec::erg::asl::foo int" << '\n';
			}

			void bar()
			{
				foo(12.3);		// nec::erg::asl::foo
				//foo("necati ergin");	// error!
				erg::foo(3.4);
				nec::foo("necati ergin");
			}
		}
	}
}

int main()
{
	nec::erg::asl::bar();
}
