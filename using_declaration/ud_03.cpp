//Names introduced into a namespace scope by a using - declaration can be used just like any other names, 
//including qualified lookup from other scopes:
//example from cppreference.com

void f();

namespace A {
	void g();
}

namespace X {
	using ::f; // global f is now visible as ::X::f
	using A::g; // A::g is now visible as ::X::g
}

void h()
{
	X::f(); // calls ::f
	X::g(); // calls A::g
}
