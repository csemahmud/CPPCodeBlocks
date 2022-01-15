#include <stdio.h>
#include <conio.h>

///* Author : Mahmudul Hasan Khan CSE */

int main()
{
	const double MAX_RANGE1 = 1.7E+308L;
	double aValue1 = MAX_RANGE1;
	const double MAX_RANGE2 = 1.6E+308L;
	double aValue2 = MAX_RANGE2;
	double result = aValue1 - aValue2;
	printf("\n\n\n\t%lf - %lf = %e", aValue1, aValue2, result);
	_getch();
	return 0;
}
