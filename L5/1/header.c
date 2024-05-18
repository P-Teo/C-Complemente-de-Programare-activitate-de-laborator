#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
int impachetare(int zi , int luna , int an)
 {
	int data = 0u;
	an <<= 9;
	luna <<= 5;
	data=data | zi | luna | an; 
	return data ;
}

void citire(union Data *dd)
{
	int i;
	char *luna[] = {"ianuarie", "februarie", "martie", "aprilie", "mai", "iunie", "iulie", "august", "septembrie", "octombrie", "noiembrie", "decembrie"};
	char l[10];
	unsigned int z, a;
	printf("Scrieti ziua luna si anul:\n");
 	scanf("%u", &z);
	scanf("%s", l);
	scanf("%u", &a);
	dd->d.zi = z;
	dd->d.an = a;
	
	for (i = 0; i < 12; i++)
	{
		if (strcmp(luna[i], l) == 0) 
		 {
			dd->d.luna = i + 1;
            		break;
        	}
   	 }
}





void afisareBinara(unsigned int data) 
{
	int nr = sizeof (int) << 3; 
	unsigned int MASK = (~0u)>>1;
	MASK = ~MASK;
	unsigned int c ;
	while (nr--) 
	{
		c = (data & MASK) >> nr;
		putchar(c + '0');
		if ( ( nr & 07 ) == 0 ) 
		{
			putchar (' '); }
		MASK>>= (int) 1u;
	 }
		printf("\n");
}

