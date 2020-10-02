#include <iostream>



int main()
{
	unsigned n{}, m{};
	bool left = true;
	do
	{
		std::cin >> n >> m;
	} while ((n < 3 || n>50) || (m < 3 || m>50));

	for (auto i = 0; i < n; i++)
	{
		if (!(i % 2))
		{
			for (auto j = 0; j < m; j++)
				std::cout << "#";
			std::cout << '\n';
		}
		else
		{
			if (left)
			{
				for (auto j = 0; j < m - 1; j++)
					std::cout << ".";
				std::cout << "#\n";
				left = false;
			}
			else
			{
				std::cout << "#";
				for (auto j = 0; j < m - 1; j++)
					std::cout << ".";
				std::cout << '\n';
				left = true;
			}
		}
	}
	return 0;
}
