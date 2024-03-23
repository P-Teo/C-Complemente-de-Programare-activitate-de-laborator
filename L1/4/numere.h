#ifndef NUMERE_H_
#define NUMERE_H_
double f1(double x);
double f2(double x);
double f3(double x);
double f4(double x);
double f5(double x);
double integralaTrapez (double a, double b,unsigned int n,double(*pf)(double));
double integralaDreptunghi (double a, double b,unsigned int n,double(*pf)(double));
double integralaSimpson (double a, double b,unsigned int n,double(*pf)(double));
#endif

