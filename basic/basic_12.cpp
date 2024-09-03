//namespace alias

namespace nec_xyz_proj {
	int x = 0;
	class Erg{
		//...
	};
}

int main()
{
	namespace nec = nec_xyz_proj;

	nec::x = 10;
	nec::Erg e{};
	//...
}
