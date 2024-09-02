#include <stdio.h>

long double pochhammer(long double a, long double n) {
	long double i = 0;
	long double p = 1;
	for (i = a; i < a + n; i++) {
		p = p * i;
	}
	return p;
}

int main()
{
	long long lambda = 10;
	long double fact = 1;
	long double temp1 = 0;
	long double temp2 = 0;
	long double temp3 = 0;
	long double temp4 = 0;
	long long n = 0;
	long long nmax = 31;
	long double p = 0;

	for (n = 1; n < nmax; n++) {
		fact = fact * n;
		temp1 = (1.0L / (n + lambda)) - (4.0L / (2 * n + 1));
		temp2 = (((2 * n + 1) * (2 * n + 1) * 1.0L) / (4.0L * (n + lambda))) - n;
		temp3 = pochhammer(temp2, n - 1);
		temp4 = (1.0L / fact) * temp1 * temp3;
		p = p + temp4;
	}

	printf("%.12Lf\n", p+4);
}
