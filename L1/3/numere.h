#ifndef NUMERE_H_
#define NUMERE_H_
struct menu_item{
	char *nume;
	double(*f)(double a, double b,unsigned int n,double(*)(double));
};


int men(struct menu_item meniu[],unsigned int nf,char *msg);
double f(double x);
double integralaTrapez (double a, double b,unsigned int n,double(*pf)(double));
double integralaDreptunghi (double a, double b,unsigned int n,double(*pf)(double));
double integralaSimpson (double a, double b,unsigned int n,double(*pf)(double));
#endif

