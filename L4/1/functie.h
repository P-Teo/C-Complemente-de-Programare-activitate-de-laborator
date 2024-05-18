#ifndef FUNCTIE_H_
#define FUNCTIE_H_
typedef struct {
    int *v1;
    int *v2;
    int start;
    int end;
    int *rez_p;
} threadx;
void *produs_scalar(void *arg);
#endif

