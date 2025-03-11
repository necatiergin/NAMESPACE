#include <iostream>

namespace foo {
	void f()
	{
		std::cout << "foo::f()\n";
	}
}

namespace bar {
	using foo::f;
}

namespace baz {
	using bar::f;
}

int main()
{
	baz::f();
}
