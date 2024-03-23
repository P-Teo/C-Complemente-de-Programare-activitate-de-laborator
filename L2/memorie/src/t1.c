#include <stdio.h>
#include "functii.h"

char s[] = "Hello\n";
int c = 2;
int d;

int main(void)
{
	int i = 2;

	printf("%s", s);
	c = c + 2;
	++i;

	printf("d = ");
	scanf("%d", &d);

	for(i=0; i<5; ++i)
	{
		f1();
	}
	puts("");


	return 0;
}

