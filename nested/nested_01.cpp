namespace A {
	//...
	namespace B {
		//...
		namespace C {
			int x;
		}
	}
}

int main()
{
	A::B::C::x++;
}
