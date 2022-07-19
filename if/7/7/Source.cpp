#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int prize = 0;
	int max = 0;

	cin >> a >> b >> c;

	if (0 < a && a < 7 && 0 < b && b < 7 && 0 < c && c < 7)
	{
		if (a == b && a!=c)
		{
			prize = 1000 + a * 100;
		}

		else if (a == c && a != b)
		{
			prize = 1000 + a * 100;
		}

		else if (c == b && a != c)
		{
			prize = 1000 + b * 100;
		}

		//

		else if (a == b && b == c)
		{
			prize = 10000 + a * 1000;
		}

		//

		else if (a != b && a != c && b!=c)
		{
			if (a > b)
			{
				if (a > c)
					max = a;
				else
					max = c;
			}
			else
			{
				if (b > c)
					max = b;
				else
					max = c;
			}
			prize = max * 100;
		}
	}

	cout << prize;
	return 0;
}