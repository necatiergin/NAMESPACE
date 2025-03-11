#include <ranges>
#include <algorithm>
#include <iostream>

int main()
{
	namespace rng = std::ranges;
	int a[]{5, 2, 6, 1, 4};

	rng::sort(a);

	for (int i : a)
		std::cout << i;
}
