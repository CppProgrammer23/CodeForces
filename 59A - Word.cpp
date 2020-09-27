#include <iostream>
#include <string>

bool isUpper(std::string s)
{
	unsigned isUp{};
	for (auto i = 0; i < s.size(); i++)
	{
		if (s[i] > 64 && s[i] < 91)
			isUp++;
	}
	if (isUp > s.size() / 2)
		return true;
	return false;
}

int main()
{
	std::string s;
	std::cin >> s;
	if (bool b = isUpper(s); b)
	{
		for (auto i = 0; i < s.size(); i++)
			s[i] = (s[i] > 64 && s[i] < 91) ? s[i] : s[i] - 32;
	}
	else
	{
		for (auto i = 0; i < s.size(); i++)
			s[i] = (s[i] > 64 && s[i] < 91) ? s[i] + 32 : s[i];
	}
	std::cout << s;
	return 0;
}
