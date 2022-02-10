#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, m, t, c, b, x, y;
	cin >> m >> c >> t;
	a = pow(sqrt(m * tan(t) + fabs(c * sin(t))), 1.0 / 3) + sin(92 / 180 * M_PI);
	cout << a;
	cin >> x >> y;
	b = sqrt(fabs(x - y) / x + 8 * y * y) - pow(sqrt(pow(x, 5) + x * y / pow(3 + y, 2)), 1.0 / 3) + pow(M_E, 5 * y);
	cout << b;
}
//Comment from lab 8