#include <iostream>
#include <numeric>

int main()
{
	unsigned a{}, b{}, stone{};
	do
	{
		std::cin >> a >> b >> stone;
	} while ((a < 1 || a>100) || (b < 1 || b>100) || (stone < 1 || stone >100));
	
	while (stone)
	{
		stone -= std::gcd(a, stone);
		if (!stone)
		{
			std::cout << 0;
			break;
		}
		stone -= std::gcd(b, stone);
		if (!stone)
		{
			std::cout << 1;
			break;
		}
	}
		
	return 0;
}
