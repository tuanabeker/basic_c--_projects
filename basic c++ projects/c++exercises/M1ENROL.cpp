#include <iostream>
using namespace std;

int main()
{
	int t, x, y;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		if (y > x)
		{
			cout << y - x << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
	return 0;
}
