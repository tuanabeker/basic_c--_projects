#include <iostream>
using namespace std;

int main()
{
    int x = 0, t = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x;
        if (x == 6)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}