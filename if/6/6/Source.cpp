#include <iostream>

using namespace std;

int main()
{
	int H, M;
	int h, m;
	int time;

	int fH, fM;
	cin >> H >> M;
	cin >> time;

	if (H > 23 || H < 0 || M > 59 || M < 0)
	{
		return 0;
	}

	h = time / 60;
	m = time % 60;

	if (M + m >= 60)
	{
		fH = H + h + 1;
		fM = M + m - 60;
	}

	else
	{
		fH = H + h;
		fM = M + m;
	}

	if (fH > 23)
		fH = fH - 24;

	cout << fH << ' ' << fM;
	return 0;
}