#include <iostream>
using namespace std;

int main()
{
    int t = 0, x = 0, y = 0, cost = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        cost = x * y;
        cout << cost << endl;
    }

    return 0;
}