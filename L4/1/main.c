#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>
#include<pthread.h>
#include "functie.h"
#include <ctype.h>
#include <string.h>
int main( int argc, char* argv[] )
{
	int*v1,*v2,n,i;
	threadx *i_thread=0;
	int rezultat_t = 0;
	void *rezultat=0;
	int nr_threaduri = atoi(argv[2]);
	FILE *in=0;
	if(argc<3)
	{
		fprintf(stderr,"functia nu a primit argument");
		exit(EXIT_FAILURE);
	}
	in=fopen(argv[1],"r");
	if(0==in)
	{
		fprintf(stderr,"Eroare la deschiderea fisierului");
		exit(EXIT_FAILURE);
	}
	fscanf(in, "%d", &n);
	v1=(int*)malloc(sizeof(int)*n);
	v2=(int*)malloc(sizeof(int)*n);
	if (v1 == 0) 
	{
       		 fprintf(stderr, "Eroare la alocarea de memorie.\n");
      		  exit(EXIT_FAILURE);
    	}
    	if (v2 == 0) 
    	{
        	fprintf(stderr, "Eroare la alocarea de memorie.\n");
        	exit(EXIT_FAILURE);
  	  }
	for(i=0;i<n;i++)
	{
		fscanf(in, "%d", &v1[i]);
	}
	for(i=0;i<n;i++)
	{
		fscanf(in, "%d", &v2[i]);
	}

	/*printf("v1: ");
    	for (i = 0; i < n; i++) 
    	{
     	  	 printf("%d ", v1[i]);
   	 }
   	 printf("\n");

 	 printf("v2: ");
    	for (i = 0; i < n; i++) 
    	{
        	printf("%d ", v2[i]);
  	 }
    	printf("\n");*/
    	
    	
    	
    	
    	
    	
    	
    	
    	
	pthread_t threads[nr_threaduri];
   	 pthread_attr_t attr;

	for (i = 0; i < nr_threaduri; i++) 
	{
		
		i_thread = malloc(sizeof(threadx));
       		i_thread->v1 = v1;
       		i_thread->v2 = v2;
       		i_thread->start= i * (n / nr_threaduri);
      		i_thread->end= (i + 1) * (n / nr_threaduri);
      		if (pthread_attr_init(&attr) != 0) 
      		{
           		 fprintf(stderr, "Eroare la inițializare a atributului.\n");
          		 exit(EXIT_FAILURE);
       		}

     		if (pthread_create(&threads[i], &attr, produs_scalar, i_thread) != 0) 
     		{
           		fprintf(stderr, "Eroare la crearea firului de execuție.\n");
          		exit(EXIT_FAILURE);
          	}
       		if (pthread_attr_destroy(&attr) != 0) 
       		{
            		fprintf(stderr, "Eroare la distrugerea atributului.\n");
            		exit(EXIT_FAILURE);
        	}
    	}
    
    	
  	 for (i = 0; i < nr_threaduri; i++)
   	 {
    		    pthread_join(threads[i],(void**) &rezultat);
    		    rezultat_t=rezultat_t+*((int*)rezultat);
    		       	printf("%d \n",*((int*)rezultat));
   	 }

    	printf("Produsul scalar: %d\n", rezultat_t);
    	
    
    	
    	
    	
    	
	fclose(in);
	free(v1);
	free(v2);
	return 0;
}
