#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	if (A <= 0 || A > 10000 || B <= 0 || B > 10000)
		return 0;

	cout << A+B<< endl;
	cout << A-B<< endl;
	cout << A*B<< endl;
	cout << A/B<< endl;
	cout << A%B<< endl;

	return 0;
}
