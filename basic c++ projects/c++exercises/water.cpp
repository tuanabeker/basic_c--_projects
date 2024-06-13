#include <iostream>
using namespace std;

int main()
{
    int t = 0, x = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x;
        if (x >= 2000)
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
