namespace nec {
	class C {
		//...
	};
	auto f = [](C) { 
		//...
	};  
}

int main()
{
	nec::C x;
	f(x);  //invalid - NO ADL
}
