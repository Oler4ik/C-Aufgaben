#include <stdio.h>

int a = -5;
int b = 17;

void tausch(){
	
		//vertausche a und bar
	printf("Vertausche %d mit %d\n", a,b);
	int dummy;
	dummy = a;
	a = b;
	b = dummy;
	printf("Result %d mit %d\n", a,b);
}

int main ()
{
		
	printf("a = %d, b = %d\n", a,b);
	
	tausch();
	printf("a = %d, b = %d\n", a,b);
	
	return 0;
}