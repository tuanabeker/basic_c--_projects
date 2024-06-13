#include <iostream>

int main()
{
    int year;
    int sum = 0;
    std::cin >> year;
    while (year <= 4002)
    {
        sum += year;
        std::cout << year << "\n";
        year += sum;
    }
}
