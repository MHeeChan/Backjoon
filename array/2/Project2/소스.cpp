#include <iostream>

using namespace std;

int main()
{
	int num;
	int arr[9];
	int max = 0;
	int maxind = 0;
	

	
	for (int i = 0; i<9; i++)
	{
		cin >> num;
		if (1 <= num && num < 100)
			arr[i] = num;
		else
			return 0;
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (arr[i] == arr[j])
				return 0;
		}
	}
	
	for (int i = 0; i<9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxind = i;
		}
	}

	cout << max << endl;
	cout << maxind + 1;
}