#include <iostream>
using namespace std;

int main()
{
    int t, n, happy, a[100], b[100];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int happy = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i])
                happy++;
        }
        cout << happy << endl;
    }
    return 0;
}