#include <stdio.h>


unsigned long fact(unsigned long num){
	if(num <= 1){
		return 1;
	}
	else {
		return num*fact(num-1); //Rekursion - Funktion ruft sich selbst
	}
}


int main ()
{
	for(int n = 1; n <= 10; n++){
		printf("%lu\n", fact(n));
	}
	
	printf("Kakultet von 6: %ld\n", fact(6));
	
	return 0;
}