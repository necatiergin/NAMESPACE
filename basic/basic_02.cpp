namespace nec {
	int x = 10;
}

namespace nec {
	int y = 21;
}

namespace nec {
	void foo();
}


int main()
{
	nec::x = 25;
	nec::y = 35;
	nec::foo();
}
