namespace nec {
	void foo();
	int ival{};
	struct A {
		static void bar();
	};
	
}

void f1()
{
	using namespace nec;
	foo();
	++ival;
	A::bar();
}

void f2()
{
	foo();  //error
	++ival; //error
	A::bar(); //error
}

