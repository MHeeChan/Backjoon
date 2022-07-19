#include <iostream>

using namespace std;

int main()
{
	double sub; // 0 < sub <= 1000
	cin >> sub;
	if (0 > sub || sub > 1000)
		return 0;

	double* arr = new double[int(sub)];
	for (int i = 0; i < sub; i++)
	{
		cin >> arr[i];
		if (0 > arr[i] || arr[i] > 100)
		{
			break;
		}
	}
	double zero = 0.0;
	double* sum = &zero;
	double max = 0;

	for (int i = 0; i < sub; i++)
	{
		*sum = *sum + arr[i];
	}

	if (*sum <= 0)
		return 0;


	
	for (int i = 0; i < sub; i++)
	{
		if (sub != 1) 
		{
			for (int j = i + 1; j < sub; j++)
			{
				if (arr[i] <= arr[j])
				{
					if (max < arr[j])
					{
						max = arr[j];
					}
				}
				else
					if (max < arr[i])
						max = arr[i];
			}
		}
		else
		{
			max = arr[i];
		}

	}
	double sum2 = 0;
	for (int i = 0; i < sub; i++)
	{
		sum2 = sum2 + arr[i];
	}

	cout << (sum2) / max * double(100) / sub << endl;
	
	delete[] arr;
	return 0;

}