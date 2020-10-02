#include <iostream>
#include <string>

void occ(std::string& s, char c)
{
	unsigned oc{};
	for (auto i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
			oc++;
		if (oc > 1)
		{
			s[i] = '1';
			oc = 0;
		}
	}
}

unsigned distinctL(std::string s)
{
	unsigned count{}, temp{};
	for (auto i = 0; i < s.size(); i++)
	{
		occ(s, s[i]);
	}
	for (auto i = 0; i < s.size(); i++)
	{
		(s[i] > 96 && s[i] < 123) ? count++ : count;
	}
	return count;
}

int main()
{
	std::string s;
	do
	{
		std::getline(std::cin,s);
	} while (s.size() > 1000 || s.size() < 2);
	if (s.size() == 2)
	{
		std::cout << 0;
		return 0;
	}
	std::cout << distinctL(s);
	return 0;
}
