#include <iostream>
#include <math.h>
/*Simpsons approximation*/
#define PI 3.14159

//Function we are approximating
double function(double x) {
	double inside = 2 + pow(sin(x), 2);
	double y = pow(inside, .5);
	r
		eturn y;
}
int main() {
	double SUM = 0;			//What we are solving for

	double a = 0;
	double b = PI/2;
	double n = 6;		//Number of iterations

	double deltaX = (b - a) / n;
	for (int i = 0; i <= n; i++) {
		double x_i = a + (deltaX * i);
		if (i == 0 || i == n) {			
			SUM += function(x_i);						//If i is first or last f(x_i)
		}
		else {
			if (i % 2 == 0) {
				SUM += 2 * function(x_i);
			}
			else {
				SUM += 4 * function(x_i);
			}
		}
	}
	SUM = SUM * (deltaX / 3);		//Dont forget to multiply by deltaX/3
	std::cout << SUM;


	return 0;
}