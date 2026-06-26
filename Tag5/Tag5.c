#include <stdio.h>

int main ()
{
	//Quadratwurzel
	// unsigned int n = 0;
	// puts("Geben Sie bitte ein Zahl ein: ");
	// scanf("%u", &n);
	// for (int k = 1; k*k <= n; k++)
	// {
		// printf("%d\n", k);
	// }
	// {	
	// int n = 1;
	// while(n <= 100){
		// if(n%17)
		// {
			// n++;
			// continue;
		// }
		// printf("%d\n", n);
		// n++;
	// }
	// }
	
	//Array
	
		int array[3] = {1,2,3};
		printf("%d %d %d\n", array[0], array[1], array[2]);
	
		char buchstaben[3] = {'a','b','c'};
		printf("%c %c %c\n", buchstaben[0], buchstaben[1], buchstaben[2]);
		
		double kommaz[3] = {1.0,2.0,3.0};
		printf("%f %f %f\n", kommaz[0], kommaz[1], kommaz[12]);
	
	
	return 0;
}