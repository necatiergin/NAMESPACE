namespace nec {
	int x = 10;
	inline namespace erg{
		int x = 5;
	}
}

#include <iostream>

int main()
{
	std::cout << nec::x << "\n"; //error (ambiguity)
}
