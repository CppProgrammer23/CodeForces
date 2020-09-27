#include <iostream>
#include <string>




int main()
{
	std::string s, alp{"abcdefjhigklmnopqrstuvwxyz"};
	do 
	{
		std::cin >> s;
	} while (s.size() < 1 || s.size() > 100);
	int count{}, index{};
	for (auto i : s)
	{
		for (auto j = 0; j < alp.size(); j++)
		{
			if (i == alp[j])
			{
				if ((abs(j - index)) > abs((int)alp.size() - 1 - j - index) + 1)
					count += abs((int)alp.size() - 1 - j - index) + 1;
				else
					count += (abs(j - index));
				index = j;
				break;
			}
		}
	}
	std::cout << count;
	return 0;
}
