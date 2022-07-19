#include <iostream>

using namespace std;

int main()
{
	int A;
	cin >> A;
	
	if (A < 1)
	{
		return 0;
	}

	if (A%4 == 0 && A%100!=0)
	{
		cout << '1';

	}
	else if (A % 400 == 0)
	{
			cout << '1';
	}
	else
	{
		cout << "0";
	}

	return 0;
}