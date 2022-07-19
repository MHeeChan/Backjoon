#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	if (A < 100 || A > 999)
		return 0;
	if (B < 0 || B > 999)
		return 0;


	cout << A * (B%10)<< endl;
	cout << A * (B%100- B % 10) / 10 << endl;
	cout << A * (B/100) << endl;
	cout << A * B << endl;
	return 0;
}
