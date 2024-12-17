namespace nec {
	class Myclass {	};
	void foo(Myclass);
	void bar(Myclass);
}


int main()
{
	int bar{};
	nec::Myclass m;

	foo(m);
	bar(m); // error 
}
