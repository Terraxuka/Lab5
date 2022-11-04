// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double x, const double y); // прототип
int main()
{
	double r, s;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	double f = (pow(g(r,s*s+1), 2)+g(1,r*r+s));
	cout << "f = " << f << endl;
	return 0;
}
double g(const double x, const double y) // визначення
{
	return sin(x)*sin(x)+cos(y)*cos(y)/ 1 + fabs(x * y);
}