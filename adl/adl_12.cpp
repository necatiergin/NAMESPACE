namespace nec {
	class NA {
	
	};
	void foo(int);
	void bar(NA);
}

namespace erg {
	using EB = nec::NA;
	void func(EB);
}

int main()
{
	// foo(0);  //invalid No ADL
	nec::foo(0);  // valid, no ADL
	erg::EB b;
	//func(b);  //invalid, there is no func in nec
	bar(b);   //valid, bar found in nec
}
