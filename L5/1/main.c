#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
int main(void)
{	
	union Data dd;
	citire(&dd);
	printf("%d:%d:%d\n",dd.d.zi,dd.d.luna,dd.d.an);
	dd.id_d=impachetare(dd.d.zi,dd.d.luna,dd.d.an);
	afisareBinara(dd.id_d);
	afisareBinara(dd.d.zi);
	afisareBinara(dd.d.luna);
	afisareBinara(dd.d.an);
	
	return 0;
}
