namespace A {
    inline namespace B {
	inline namespace C {
	    int x = 10;
	}
    }
    inline namespace D {
	int y = 20;
    }
}
int main()
{
    A::x = 1;
    A::B::x = 2;
    A::B::C::x = 3;
    A::y = 4;
    A::D::y = 5;
}
