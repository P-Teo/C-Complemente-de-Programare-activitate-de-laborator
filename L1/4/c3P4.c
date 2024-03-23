#include <stdio.h>
#include <math.h>
#include "numere.h"

int main(void)
{   
	int n=1000;
	int a,b,i,j;
	double (*pi[5])(double) = {f1,f2,f3,f4,f5};
	double (*pf[3])(double,double,unsigned int,double(*)(double)) = {integralaTrapez,integralaDreptunghi,integralaSimpson};
	double m[5][3];
	for(i=0;i<5;i++)
	{
		printf("\nPentru integrala %d:\n",i+1);
		printf("de la cat incepe intervalul?");
		scanf("%d", &a);
		printf("la cat se termina intervalul? ");
		scanf("%d", &b);
    		for(j=0;j<3;j++)
    		{
    			m[i][j]=pf[j](a,b,n,pi[i]);
    		}
	}
	printf("\nIntegrala\t\tMetoda trapezelor\t Metoda dreptunhiurilor \t Metoda Simpson\n\n");
	for(i=0;i<5;i++)
    	{
		printf("I%d\t\t\t",i+1);
		for(j=0;j<3;j++)
		{
			printf("%6lf\t\t\t",m[i][j]);
		}
		printf("\n");
	}

    return 0;
}

