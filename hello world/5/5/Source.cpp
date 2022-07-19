#include <iostream>

using namespace std;

int main()
{
	long double A, B;
	cin >> A >> B;

	if (A <= 0 || A > 10 || B <= 0 || B > 10)
		return 0;

	//printf("%f", A / B);
	cout.precision(10);
	cout << A / B;

	return 0;
}
