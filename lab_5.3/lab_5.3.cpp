// lab_5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
double j(const double x);
int main()
{
	double kp, kk, z;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double R = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		z = j(1+k+j(k)) + pow(j(1 + k*k), 2);
		cout << k << " " << z << endl;
		k += R;
	}
	return 0;
}
double j(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + exp(-(abs(x)))/(cos(x*x)+1));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = pow(x, 2*i+1)/ ((2 * i - 2) * (2 * i - 1) * (2 * i) * (2 * i + 1));
			a *= R;
			S += a;
		} while (i < 5);
		return S;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
