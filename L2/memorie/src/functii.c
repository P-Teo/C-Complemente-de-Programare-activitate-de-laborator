#include <stdio.h>
#include "functii.h"

extern int d;

void f1(void)
{
	static int i = 2;
	++i;
	printf("%d \n", i);
	printf("S-a introdus numărul d = %d\n", d);	
}

