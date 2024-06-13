#include <iostream>
using namespace std;

int main()
{
    int t, n, x, freshA[100], costB[100], cost;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
            cin >> freshA[i];
        for (int i = 1; i <= n; i++)
            cin >> costB[i];
        int cost = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freshA[i] >= x)
                cost = cost + costB[i];
        }
        cout << cost << endl;
    }
    return 0;
}