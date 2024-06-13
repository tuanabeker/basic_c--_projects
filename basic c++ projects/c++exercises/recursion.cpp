#include <iostream>
using namespace std;

int recursive_sum(int m, int n)
{
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << "Sum= " << recursive_sum(m, n);
}