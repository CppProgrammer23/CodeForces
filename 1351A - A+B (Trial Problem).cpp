#include <iostream>
#include <string>


int main()
{
    unsigned short t{};
    signed short temp{}, temp1{};
    do
    {
        std::cin >> t;
    } while (t < 1 || t > 10000);
    for (auto i = 0; i < t; i++)
    {
        std::cin >> temp >> temp1;
        std::cout << temp + temp1 << '\n';
    }
    return 0;
}
