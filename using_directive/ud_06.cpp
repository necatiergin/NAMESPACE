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
	b = 20;		// ok
	c = 30;		// ok
}
