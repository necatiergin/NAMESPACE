//namespace alias

namespace nec {
	namespace erg {
		namespace proj {
			int x = 5;
			//...
		}
	}
}

int main()
{
	namespace proj = nec::erg::proj;

	proj::x = 10;
}
