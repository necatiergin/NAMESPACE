namespace nec
{
	int a;
	int b;
}

namespace erg
{
	int a;
	int c;
}

using namespace nec;
using namespace erg;

int main()
{
	//a = 10;	// error
	nec::a = 20;
	erg::a = 30;
	b = 20;		// ok
	c = 30;		// ok
}
