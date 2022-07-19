#include <iostream>

using namespace std;

int main()
{
	int casenum;

	cin >> casenum;

	int score;
	int studentnum;

	int countstn = 0;
	int count = 0;
	int sum = 0;

	double* parray = new double[casenum];
	
	cout.setf(ios::fixed);
	cout.precision(3);


	for (int i = 0; i<casenum; i++)
	{ 
		sum = 0;
		count = 0;
		countstn = 0;
		cin >> studentnum;
		if (studentnum < 1 || studentnum > 1000)
			return 0;

		int* array = new int[studentnum];
		while (countstn < studentnum)
		{
			cin >> score;
			if (score < 0 || score > 100)
				return 0;
			array[countstn] = score;
			countstn++;
			sum = sum + score;
		}


		for (int i = 0; i < studentnum; i++)
		{
			if (array[i] > sum / studentnum)
			{

				count++;
			}
		}

		parray[i] = double(count) / double(studentnum) * 100;
		delete[] array;
	}

	for (int i = 0; i < casenum; i++)
	{
		
		cout << parray[i] << "%" << endl;
	}

	delete[] parray;
}
