#include <iostream>

namespace X
{
	namespace Y
	{
		namespace Z
		{
			using namespace std;

			void foo()
			{
				cout << "X::Y::Z::foo\n"; //valid
			}
		}
	}
}

int main()
{
	// cout << "this is a test\n";  //invalid
}
