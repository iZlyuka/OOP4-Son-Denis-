#include <iostream>
#include "func.h"
#include <math.h>

using namespace std;

void fun(double a, double b)
{
	double i;
	double m;
	double s = sin(a * b);
	double t = (a - b);
	double n = 0;
	if (a >= b) {
		n = pow(t, 1.0 / 3);
	}
	else {
		n = (pow(a, 2)) + (t / s);
	}
	if (n < b) {
		i = pow(sin(a), 2) - cos(n);
		m = ((n + a) / (-b)) + sqrt(i);
		print(m, n, a, b);
	}
	else if (n == b) {
		m = pow(b, 2) + tan(n * a);
		print(m, n, a, b);
	}
	else {
		m = pow(b, 3) + (n * pow(a, 2));
		print(m, n, a, b);
	}
}

void print(double m, double n, double a, double b)
{
	cout << "m = " << m << '\n' << "n = " << n << '\n' << "a = " << a << '\n' << "b = " << b;
}
