namespace A {
	class Myclass {	};
	class Functor {
	public:
		void operator()(Myclass);
	};
}


int main()
{
	A::Myclass m;

	Functor{}(m); //error no ADL
}
