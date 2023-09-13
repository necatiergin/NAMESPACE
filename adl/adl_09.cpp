#include <vector>
#include <algorithm>

int main()
{
	std::vector vec{ 3, 5, 1, 6, 9, 7, 2, 4 };

	sort(begin(vec), end(vec));
	//burada hem begin ve end isimleri hem de sort ismi ADL ile bulunuyor.
}
