#include <iostream>
#include <deque>
#include <algorithm>



unsigned int n, y; //initialized to 0
std::deque <long int>v;

int main()
{
	do
	{
		std::cin >> n;
	} while (n < 1 || n > 1000);
	for (auto i = 0; i < n; i++)
	{
		do
		{
			std::cin >> y;
		} while (y < 1 || y>pow(10, 6));
		v.push_back(y);
	}
	std::sort(v.begin(), v.end());
	while (v.size() != 1)
	{
		v.pop_back();
		if (v.size() == 1)
			break;
		v.pop_front();
	}
	std::cout << v.at(0);
	return 0;
}
