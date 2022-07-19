#include <iostream>

using namespace std;

int main()
{
	int H, M;
	int h, m;
	cin >> H >> M;

	if (H > 23 || H < 0 || M > 59 || M < 0)
	{
		return 0;
	}

	if (M - 45 < 0)
	{
		m = 15 + M;
		if (H == 0)
			h = 23;
		else
			h = H - 1;
	}
	else
	{ 
		m = M - 45;
		h = H;
	}

	cout << h << ' ' << m;
	return 0;
}