// using namespace directive has a scope 

namespace nec {
	void foo();
	int ival{};
	struct A {
		static void bar();
	};
	
}

using namespace nec; // in global namespace

void f1()
{
	foo();
	++ival;
	A::bar();
}

void f2()
{
	foo();
	++ival;
	A::bar();
}

