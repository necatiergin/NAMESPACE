namespace A
{
	namespace B
	{
		int x = 5;
	}
}

namespace B
{
	int y = 78;
}

int main()
{
	auto i1 = A::B::x; //ok
	//auto i2 = B::x; //error
	//auto i3 = A::B::y; //error
}
