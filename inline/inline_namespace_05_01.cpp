namespace nec {
	int x = 10;
	namespace erg{
		int x = 5;
	}
	using namespace erg;
}

#include <iostream>

int main()
{
	std::cout << nec::x << "\n";
}
