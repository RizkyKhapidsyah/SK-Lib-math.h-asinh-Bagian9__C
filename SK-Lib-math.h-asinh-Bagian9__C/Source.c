// crt_asinh.c
// Compile by using: cl /W4 crt_asinh.c
// This program displays the hyperbolic sine of pi / 4
// and the arc hyperbolic sine of the result.

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah 
	I.D.E : VS2019 */

int main() {
	double pi = 3.1415926535;
	double x, y;

	x = sinh(pi / 4);
	y = asinh(x);

	printf("sinh( %f ) = %f\n", pi / 4, x);
	printf("asinh( %f ) = %f\n", x, y);

	_getch();
	return 0;
}