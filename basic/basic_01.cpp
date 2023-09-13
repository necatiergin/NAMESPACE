namespace nec {
	int x;
	void foo();
	class Myclass{};
}

int main()
{
	nec::x = 10;
	nec::foo();
	nec::Myclass m1;

	++x; //invalid
	foo(); //invalid
	Myclass m2; //invalid
}
