#include <iostream>
#include <string>
using namespace std;

int main()
{
	int _input;
	cin >> _input;

	int start = 0;
	int* siz = new int[_input];
	
	
	while(start!=_input)
	{
	string str;
	cin >> str;

	if (str.length() <= 0 || str.length() > 80)
		return 0;

	


	string* arr = new string[str.length()];
	for (int i = 0; i < str.length(); i++)
	{
		arr[i] = str.at(i);
	}

	int* score = new int[str.length()];
	for (int i = 0; i < str.length(); i++)
	{
		if (arr[i] == "O")
			score[i] = 1;
		else if (arr[i] == "X")
			score[i] = 0;
		else
			return 0;
	}

	int sum = 0;
	int mid = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (score[i] == 1)
		{
			mid++;
			sum = sum + mid;
		}
		else
		{
			mid = 0;
		}
	}

	siz[start] = sum;
	start++;
	delete[] score;
	delete[] arr;
	
	}


	for (int i = 0; i < _input; i++)
	{
		if(i==_input-1)
			cout << siz[i];
		else
			cout << siz[i] << endl;
	}



	delete[] siz;
	return 0;
}