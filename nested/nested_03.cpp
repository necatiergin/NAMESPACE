namespace A::B::C {
	int c{1};
}


namespace A::B {
	int b{ 2 };
}


namespace A {
	int a{ 3 };
}

#include <iostream>


int main()
{
	std::cout << A::a << A::B::b << A::B::C::c;
}
