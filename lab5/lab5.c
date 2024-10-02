#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, z, a, b, c, v, d, aa, bb, cc, dd, aaa, bbb, ccc, aaaa, bbbb, cccc, dddd, q, t, h;
	x = -4.5;
	y = 0.75 * (1 / pow(10, 4));
	z = 0.845 * pow(10, 2);
	a = x - y;
	b = fabs(a);
	c = pow(b, 2);
	v = 8 + c + 1;
	d = pow(v, 1 / 3.f);//1
	aa = pow(x, 2);
	bb = pow(y, 2);
	cc = aa + bb + 2;//2
	dd = d / cc;
	aaa = x - y;
	bbb = fabs(aaa);
	ccc = exp(bbb);//3
	aaaa = tan(z);
	bbbb = pow(aaaa, 2);
	cccc = bbbb + 1;
	dddd = pow(cccc, x);
	q = ccc * dddd;
	t = d / cc;
	h = t - q;
	printf("%lf", h);
}