#include <iostream>
using namespace std;

int main()
{
    int t, n, a[1001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        int smax = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > smax && a[i] < max)
                smax = a[i];
        }
        cout << max + smax << endl;
    }
    return 0;
}