#include <iostream>
#include <string>



int main()
{
	unsigned n; bool l, t=false;
	do
	{
		std::cin >> n;
	} while (n < 1 || n>100);
	for (auto i = 0; i < n; i++)
	{
		std::cin >> l;
		if (l)
			t = true;
	}
	if (t)
		std::cout << "HARD";
	else
		std::cout << "EASY";
	return 0;
}
