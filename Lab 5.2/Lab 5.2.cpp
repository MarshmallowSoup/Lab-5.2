#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);
int main()
{
	/*double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "atan(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		S(x, eps, n, s);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}*/
	double a = 1.0;
	A(1.0, 0, a);
	cout << a << endl;
	cout << "-------------------------------------------------" << endl;
	return 0;
};
/*void S(const double x, const double eps, int& n, double& s)
{
	n = 0; // вираз залежить від умови завдання 
	const double pi = 3.14159265358979323846;
	double a = -1 / x; // вираз залежить від умови завдання варіанту
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	s -= pi / 2;
}*/

void A(const double x, const int n, double& a)
{
	double R = -((2. * n - 1) / (x * x * (2. * n + 1))); // вираз залежить від умови завдання варіанту
	a *= R;
}
