namespace nec {
	class C {
	
	};
	template<typename T> 
	void foo(T);
	
	template<int i> 
	void bar(C);
}


void func()
{
	nec::C x;
	using nec::bar;

	bar<5>(x); //valid but no ADL
}

int main()
{
	nec::C x;

	foo(x);				//ADL finds foo
	nec::foo(x);		//valid, but  no ADL
	foo<nec::C>(x);		//invalid in C++17 valid since C++20
	nec::bar<10>(x);	//valid no ADL
	bar<0>(x);
}
