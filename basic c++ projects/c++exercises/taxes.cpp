#include <iostream>
using namespace std;

int main()
{
    int t = 0, y = 0, x = 0, invest = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        invest = x - y;
        cout << invest << endl;
    }

    return 0;
}
