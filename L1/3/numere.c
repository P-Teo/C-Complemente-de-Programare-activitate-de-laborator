#include "numere.h"
#include <math.h>
#include <stdio.h>

double integralaTrapez (double a, double b,unsigned int n,double(*pf)(double))
{
	double sum;
	double x;
	double dx;
	double eps=1e-4;
	dx=(b-a)/n;
	sum=((*pf)(a)+(*pf)(b))/2.0;
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

double f(double x)
{
	return sin((exp(2*x)+3));
}
int men(struct menu_item meniu[],unsigned int nf,char *msg)
{   
    int optiune=0;
    register unsigned int i;
    puts(msg);
    for(i=0;i<nf;++i)
    {
    	printf("\t%d - %s\n",i+1,meniu[i].nume);
    }
    printf("\t0 - exit\n");
    printf("\t >> ");
    scanf("%d",&optiune);
    return (optiune);
}
