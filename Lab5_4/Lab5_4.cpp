//Lab5_3
#include <iostream>
#include <cmath>
using namespace std;
double p(const double x);
int main()
{
	double tp, tk, a;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dt = (tk - tp) / n;
	double t = tp;
	while (t <= tk)
	{
		a = p(1 + 2 * t) + pow(p(p(1) + 2 * p(2 * t)), 2);
		cout << t << " " << a << endl;
		t += dt;
	}
	return 0;
}
double p(const double x)
{
	if (abs(x) >= 1)
		return (pow(sin(x), 2) + sin(pow(x, 2))) / 1 + pow(cos(x), 2);
	else
	{
		double S = 0;
		int i;
		int n = 0;
		double fac;
		double h = 1 / (1 + x * x);
		double a = 1;
		S = a;
		do
		{
			n++;
			for (i = 1; i <= 4 * n + 1; i++) {
				fac = fac * i;
			}
			double R = (pow(x, 4 * n + 1)) / (fac);
			a *= R;
			S += a;
		} while (n < 6);
		return h + S;
	}
}