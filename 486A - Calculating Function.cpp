#include <iostream>


int main()
{
    
    long long n{};
    do
    {
        std::cin >> n;
    } while (n<1 || n>pow(10, 15));

    if (n % 2)
        std::cout << -(n + 1) / 2;
    else
        std::cout << n / 2;
    return 0;
}
