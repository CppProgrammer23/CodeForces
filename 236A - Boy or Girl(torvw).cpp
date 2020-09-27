#include <iostream>
#include <string>
#include <tuple>


std::tuple<unsigned, bool> occ(std::string s, char c)
{
	unsigned oc{};
	for (auto i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
			oc++;
	}
	if (oc > 1)
		return std::make_tuple(oc, true);
	else
		return std::make_tuple(oc, false);
}

unsigned distinctL(std::string s)
{
	unsigned count{}, temp{}; size_t si{};
	for (auto i = 0; i < s.size(); i++)
	{
		if (auto [val, b] = occ(s, s[i]); !b)
			count++;
	}
	
	return count;
}



int main()
{
	std::string s;
	do
	{
		std::cin >> s;
	} while (s.size() < 1 || s.size() > 100);
	std::cout << distinctL(s);
	/*if (distinctL(s) % 2)
		std::cout << "IGNORE HIM!";
	else
		std::cout << "CHAT WITH HER!";*/
	return 0;
}
