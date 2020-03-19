#include <iostream>
#include <math.h>
using namespace std;
/*Trapezoid approximation nibba*/
const double e = 2.71828;
double function(double x) {
	return pow(x,x);
}

int main() {
	double SUM = 0;

	double a = -8;
	double b = 37;
	double n = 700000;

	double deltaX = ((b - a) / n);
	for (int i = 0; i <= n; i++) {
		double xi = a + (i * deltaX);
		if (i == 0 || i == n) {
			SUM += function(xi);
		}
		else {
			SUM += 2*function(xi);
		}
	}

	SUM = SUM * (deltaX / 2);
	cout << SUM;
	return 0;
}