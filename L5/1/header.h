#ifndef HEADER_H_
#define HEADER_H_
struct data_{
	unsigned int zi:5;
	unsigned int luna:4;
	unsigned int an:11;
};
typedef struct data_ data;
int impachetare(int zi , int luna , int an);
void afisareBinara(unsigned int data) ;
union Data{
	data d;
	unsigned int id_d;
} ;
void citire(union Data *dd);
#endif
