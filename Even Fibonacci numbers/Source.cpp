#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int F(int d)
{
	int a = 1, b = 2, c = 0, e = 1;
	while (a < (d-1))
	{
		c = e + b;
		e = b;
		b = c;
		a++;
	}
	if (d == 1)
	{
		c = 1;
	}
	else if (d == 2)
	{
		c = 2;
	}
	else if (d == 3)
	{
		c = 3;
	}
	return c;
}
int main()
{
	int a, b = 1;
	long int c=0;
	printf("the Fibonacci sequence whose values do not exceed(terms) ");
	scanf("%d", &a);
	while (b<=a)
	{
		if (b%2==0)
		{
			c += F(b);
		}
		b++;
	}
	printf("the sum of the even-valued terms is %ld", c);
	return 0;
}