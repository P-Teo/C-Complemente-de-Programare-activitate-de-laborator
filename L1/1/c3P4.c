#include <stdio.h>
#include "numere.h"

int main(void)
{   
    int n;
    int x;
    int i, j;
    int ind;
    printf("ate valori are sirul pentru care calculati indicatorul lui Euler? ");
    scanf("%d", &n);
    for(i=1; i<=n; ++i)
    {   
        printf("Numarul pentru care se calculează indicatorul Euler: ");
        scanf("%d", &x);
        ind = 1;
        for(j=2; j<x; ++j)
        {
            int c;
            c = cmmdc(x, j);
            if(c == 1)
            {
                ++ind;
            } // if
        } // for – j 

        printf("Numarul %d are indicatorul Euler = %d\n", x, ind);
    } // for – i 
    
    return 0;
}

