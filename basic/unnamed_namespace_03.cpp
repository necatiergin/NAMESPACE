#include <iostream>

namespace 
{
	int x = 5;
}

int x = 34;

int main()
{
	std::cout << ::x << '\n'; //valid
	//std::cout << x << '\n'; //error
}
