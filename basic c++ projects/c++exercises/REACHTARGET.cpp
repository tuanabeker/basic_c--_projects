#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0, t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        cout << x - y << endl;
    }
    return 0;
}