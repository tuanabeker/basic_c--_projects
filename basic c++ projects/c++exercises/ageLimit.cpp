#include <iostream>
using namespace std;

int main()
{
    int t = 0, x = 0, y = 0;
    int age = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> age;

        if (age >= x && age < y)
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
