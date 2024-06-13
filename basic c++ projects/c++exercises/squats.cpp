#include <iostream>
using namespace std;

int main()
{
    int sets = 15, t = 0, setnum = 0, tot = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> setnum;
        tot = sets * setnum;
        cout << tot << endl;
    }
    return 0;
}
