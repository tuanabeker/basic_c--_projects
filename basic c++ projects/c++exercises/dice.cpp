#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int X = 0, Y = 0, T = 0;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;
        if (X + Y > 6)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
