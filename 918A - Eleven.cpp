#include <iostream>
#include <array>
#include <string>


template <unsigned long n>
struct Fib
{
	enum { val = Fib<n - 1>::val + Fib<n - 2>::val };
};
template<>
struct Fib<1>
{
	enum { val = 1 };
};
template<>
struct Fib<0>
{
	enum { val = 0 };
};
template<size_t...S>
constexpr bool fib_Imp(std::index_sequence<S...> /*unused*/, const unsigned i)
{
	std::array<int, sizeof ... (S)> arr{ Fib<S>::val... };
	for (auto j : arr)
	{
		if (j == i)
			return true;
	}
	return false;
}
constexpr bool fib(const unsigned i)
{
	return fib_Imp(std::make_index_sequence<1000>(), i);
}

int main()
{
	unsigned nb{};
	do
	{
		std::cin >> nb;
	} while (nb > 1000 || nb < 1);
	std::string s;
	for (auto i = 0; i < nb; i++)
	{
		if (fib(i+1)) [[likely]]
			s += 'O';
		else
			s += 'o';
	}
	std::cout << s;

	return 0;
}
