#include <stdio.h>
#include <math.h>
#include "numere.h"

int main(void)
{   
    int n;
    int a,b;
    double rez;
    printf("cate subintervale avem? ");
    scanf("%d", &n);
    printf("de la cat incepe intervalul?");
    scanf("%d", &a);
    printf("la cat se termina intervalul? ");
    scanf("%d", &b);
    rez=integralaTrapez(a,b,n,f);
    printf("%lf",rez);
    return 0;
}

