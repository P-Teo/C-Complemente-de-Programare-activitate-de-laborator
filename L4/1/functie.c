#include "functie.h"
#include <stdio.h>
#include <stdlib.h>
void *produs_scalar(void *arg)
{
 	threadx *x=(threadx*)arg;
 	int i;
  	int *v1=x->v1;
   	int *v2=x->v2;
   	int start=x->start;
    	int end=x->end;
  	int *rezultat_local=malloc(sizeof(int));
  	if (rezultat_local == NULL)
    	{
        	fprintf(stderr, "Eroare la alocare in functie\n");
      		exit(EXIT_FAILURE);
   	 }
   	*rezultat_local = 0;
  	for (i = start; i < end; i++) 
  	{
      		  *rezultat_local=*rezultat_local+v1[i] * v2[i];
   	}
 	return rezultat_local;
}

