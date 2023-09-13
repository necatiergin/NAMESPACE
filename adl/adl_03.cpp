#include <algorithm>
#include <iostream>

namespace nec {
	class Myclass {
	private:
		int mx = 10;
	public:
		friend void swap(Myclass&, Myclass&);
	};

	void swap(Myclass& r1, Myclass& r2)
	{
		std::cout << "nec::swap()\n";
		int temp{ r1.mx };
		r1.mx = r2.mx;
		r2.mx = temp;
	}
}


using namespace std;

int main()
{
	nec::Myclass m1, m2;

	std::swap(m1, m2);
	swap(m1, m2);
}
