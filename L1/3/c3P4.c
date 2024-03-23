#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "numere.h"
struct menu_item meniu[]={
	{"calculul integralei prin metoda trapezelor", integralaTrapez},
	{"calculul integralei prin metoda dreptunghiurilor", integralaDreptunghi},
	{"calculul integralei prin metoda simpson", integralaSimpson}
};
int main(void)
{   
	int n=0,optiune=0;
	double a=0,b=0;
	double rez=0;
	char *mesaj=0;
	mesaj=(char*)malloc(sizeof(char));
	 if(mesaj==0)
	 {
		fprintf(stderr,"memorie insuficienta");
 		exit(EXIT_FAILURE);
	}
	optiune=men(meniu,3,mesaj);
	if(optiune==0)
	{
		return 0;
	}
	printf("de la cat incepe intervalul?");
	scanf("%lf", &a);
	printf("la cat se termina intervalul? ");
	scanf("%lf", &b);
	printf("cate subintervale avem? ");
	scanf("%d", &n);

	if(optiune==1)
	{
		rez=integralaTrapez(a,b,n,f);
	}
	else
	{
		if(optiune==2)
		{
			rez=integralaDreptunghi(a,b,n,f);
		}
		else
		{
			if(optiune==3)
			{
				rez=integralaSimpson(a,b,n,f);
			}
		}
	}
	
	printf("%lf",rez);
	return 0;
}

