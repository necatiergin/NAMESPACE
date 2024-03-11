namespace nec {
	namespace erg {
		namespace pro {
			struct A {
				static void foo();
			};

			void bar();
		}
	}
}

void f()
{
	using namespace nec::erg::pro;
	A::foo();
	bar();
}
