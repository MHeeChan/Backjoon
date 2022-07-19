#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int check(int i);
void print(int* x0, int* x1, int* x2, int* x3, int* x4, int* x5, int* x6, int* x7, int* x8, int* x9);

int aa = 0;
int ab = 0;
int ac = 0;
int ad = 0;
int ae = 0;
int af = 0;
int ag = 0;
int ah = 0;
int ai = 0;
int aj = 0;

int* x0 = &aa;
int* x1 = &ab;
int* x2 = &ac;
int* x3 = &ad;
int* x4 = &ae;
int* x5 = &af;
int* x6 = &ag;
int* x7 = &ah;
int* x8 = &ai;
int* x9 = &aj;


int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < 100 || a >1000)
		return 0;
	if (b < 100 || b >1000)
		return 0;
	if (c < 100 || c >1000)
		return 0;
	int mult;
	int mid;
	int cot;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	int F = 0;
	int G = 0;
	int H = 0;
	int I = 0;
	int J = 0;


	mult = a * b * c;
	// 1000000 < mult << 1000000000
	A = mult / 1000000000;
	mid = mult % 1000000000;

	B = mid / 100000000;
	mid = mid % 100000000;

	C = mid / 10000000;
	mid = mid % 10000000;

	D = mid / 1000000;
	mid = mid % 1000000;

	E = mid / 100000;
	mid = mid % 100000;

	F = mid / 10000;
	mid = mid % 10000;

	G = mid / 1000;
	mid = mid % 1000;

	H = mid / 100;
	mid = mid % 100;

	I = mid / 10;
	mid = mid % 10;

	J = mid / 1;

	if (A != 0)
	{
		int arr1[10] = { A,B,C,D,E,F,G,H,I,J };
		for (int i = 0; i < 10; i++)
		{
			check(arr1[i]);
		}
		print(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
	}

	else if (B != 0)
	{
		int arr2[9] = { B,C,D,E,F,G,H,I,J };
		for (int i = 0; i < 9; i++)
		{
			check(arr2[i]);
		}
		print(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
	}

	else if (C != 0)
	{
		int arr3[8] = { C,D,E,F,G,H,I,J };
		for (int i = 0; i < 8; i++)
		{
			check(arr3[i]);
		}
		print(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
	}

	else if (D != 0)
	{

		int arr4[7] = { D,E,F,G,H,I,J };
		for (int i = 0; i<7; i++)
		{
			check(arr4[i]);
		}
		print(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);

	}

	return 0;
}

int check(int i)
{
	switch (i)
	{
	case 0:
		aa++;
		x0 = &aa;
		break;
	case 1:
		ab++;
		x1 = &ab;
		break;
	case 2:
		ac++;
		x2 = &ac;
		break;
	case 3:
		ad++;
		x3 = &ad;
		break;
	case 4:
		ae++;
		x4 = &ae;
		break;
	case 5:
		af++;
		x5 = &af;
		break;
	case 6:
		ag++;
		x6 = &ag;
		break;
	case 7:
		ah++;
		x7 = &ah;
		break;
	case 8:
		ai++;
		x8 = &ai;
		break;
	case 9:
		aj++;
		x9 = &aj;
		break;
	default:
		break;
	}
	return 0;
}

void print(int* x0, int* x1, int* x2, int* x3, int* x4, int* x5, int* x6, int* x7, int* x8, int* x9)
{
	cout << *x0 << endl;
	cout << *x1 << endl;
	cout << *x2 << endl;
	cout << *x3 << endl;
	cout << *x4 << endl;
	cout << *x5 << endl;
	cout << *x6 << endl;
	cout << *x7 << endl;
	cout << *x8 << endl;
	cout << *x9 << endl;
}

/*
/10
%10
활용하자
*/