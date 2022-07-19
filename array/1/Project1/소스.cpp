#include <iostream>

using namespace std;

int main()
{
	int b = true;


		int ount;
		cin >> ount;
		if (1 > ount || ount > 1000000)
			return 0;

		int* arr = new int[ount];
		int num;
		int min = 0;
		int max = 0;
			for (int i = 0; i < ount; i++)
			{
				cin >> num;
				if (-1000000 <= num && num <= 1000000)
				{
					arr[i] = num;
				}
				else
				{
					b = false;
					break;
				}
			}

			if(b)
			{
			min = arr[0];
			max = arr[0];
			


			for (int i = 0; i < ount; i++)
			{

				if (arr[i] >= max)
				{
					max = arr[i];
					if (i == ount)
						break;
				}
			}
			for (int i = 0; i < ount; i++)
			{
				if (arr[i] <= min)
				{
					min = arr[i];
					if (i == ount)
						break;
				}

			}
			cout << min << '\n' << max << endl;

			}
		delete[] arr;
	
	return 0;
}