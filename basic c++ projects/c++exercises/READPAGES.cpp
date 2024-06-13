#include <iostream>
using namespace std;

int main()
{
	int t, x, y, n;
	cin >> t;
	while (t--)
	{
		cin >> n >> x >> y;
		if (x * y >= n)
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
