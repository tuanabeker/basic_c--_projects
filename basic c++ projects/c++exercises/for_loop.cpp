#include <iostream>
using namespace std;

int main()
{
    int year;
    int sum = 0;

    std::cin >> year;
    for (; year <= 4002; year += sum)
    {
        sum += year;
        std::cout << year << "\n";
    }
}