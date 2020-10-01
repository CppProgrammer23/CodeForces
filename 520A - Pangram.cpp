#pragma warning (disable :4996)
#include <iostream>
#include <string>
#include <cstdio>


int main()
{
	unsigned l;
	do
	{
		std::cin >> l;
	} while (l < 1 || l > 100);

	const char* str = new char[l]; //I used the C-Style char* to profit the use of l (the length of the word)
	char t[]{ 'a','z','e','r','t','y','u','i','o','p','q','s','d','f','g','h','j','k','l','m','w','x','c','v','b','n' };
	unsigned t1[26]{ 0 }; //t and t1 can be mixed in a std::map but I wanted to use C-Style
	scanf("%s", str);
	std::string s = str;
	for (auto &i : s)
	{
		i = (i > 64 && i < 91) ? i + 32 : i;
	}
	if (l < 26)
	{
		std::cout << "NO";
		return 0;
	}
	for (auto i : s)
	{
		for (auto j = 0; j < 26; j++)
		{
			if (i == t[j])
				t1[j]++;
		}
	}
	for (auto i = 0; i < 26; i++)
	{
		if (t1[i] == 0)
		{
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";


	return 0;
}
