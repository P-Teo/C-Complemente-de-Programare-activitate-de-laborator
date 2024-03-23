#include "numere.h"
#include <math.h>

double integralaTrapez (double a, double b,unsigned int n,double(*pf)(double))
{
	double sum;
	double x;
	double dx;
	double eps=1e-4;
	dx=(b-a)/n;
	sum=((*pf)(a)+(*pf)(b))/2;
	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		sum+=((*pf)(x));
	}
	sum*=dx;
	
	return sum;
}
double integralaDreptunghi (double a, double b,unsigned int n,double(*pf)(double))
{
	double sum;
	double x;
	double dx;
	double eps=1e-4;
	dx=(b-a)/n;
	sum=0;
	for(x=a;fabs(x-b)>eps;x+=dx)
	{
		sum+=((*pf)((x+x+dx)/2.0));
	}
	sum=sum*dx;
	return sum;

}
double integralaSimpson (double a, double b,unsigned int n,double(*pf)(double))
{
	double sum;
	double x;
	int k=0;
	double dx;
	double eps=1e-4;
	dx=(b-a)/n;
	sum=(*pf)(a)+(*pf)(b);
	k++;
	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		if(k%2==1)
		{
			sum+=((*pf)(x))*4;
		}
		else
		{
			sum+=((*pf)(x))*2;
		}
		k++;
	}
	sum*=dx;
	sum=sum/3.0;
	return sum;

}
double f1(double x)
{
	return exp(-x*x);
}
double f2(double x)
{
	return x;
}
double f3(double x)
{
	return x*x;
}
double f4(double x)
{
	return pow(1+1/x,1/2);
}
double f5(double x)
{
	return x/(x+1);
}
