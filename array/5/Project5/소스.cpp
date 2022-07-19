#include <iostream>

using namespace std;

int main()
{
	unsigned int a, b, c, d, e, f, g, h, i, j;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
	if (a > 1000 || b > 1000 || c > 1000 || d > 1000 || e > 1000 || f > 1000 || g > 1000 || h > 1000 || i > 1000 || j > 1000)
		return 0;
	int arr[10] = { a,b,c,d,e,f,g,h,i,j };
	
	int A = 10;
	int *ref = &A;
	int check = 10000;
	bool x = true;

	for (int i = 0; i < 10; i++)
	{
			for (int j = i + 1; j < 10; j++)
			{
				if (arr[i]%42 == arr[j]%42 && arr[i] != 9999)
				{
					A--;
					arr[i] = 9999;
					x = false;
				}
			}
	}

	cout << *ref;
	return 0;
}