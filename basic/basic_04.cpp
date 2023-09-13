namespace Nec {

	void foo();
	
	void bar() {
		foo();
		baz();		//invalid
		Nec::baz();   //invalid
		x++;        //invalid
		Nec::x++;     //invalid
	}

	void baz();
	int x = 10;
}
