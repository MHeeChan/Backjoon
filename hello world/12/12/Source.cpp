#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	if (A < 2 || A > 10000)
		return 0;
	if (B < 2 || B > 10000)
		return 0;
	if (C < 2 || C > 10000)
		return 0;

	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C  << endl;
	cout << (A*B) % C << endl;
	cout << ((A % C) *(B % C)) % C << endl;
	return 0;
}
