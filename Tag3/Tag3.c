#include <stdio.h>

int main()
{
	int jahr = 0;
		
	int durch4 = jahr%4 == 0;
	int durch100 = jahr%100 == 0;
	int durch400 = jahr%400 == 0;
	
	printf("Schreiben Sie ein Jahr:\n");
	
	int scan = scanf("%i", &jahr);
	printf("scan: %d\n", scan);
	
	if (durch4 && !durch100 || durch400){
	printf("%d ist ein Schaltjahr\n", jahr);
	}
	else 
		printf("%d ist kein Schaltjahr\n", jahr);
	
	printf("/4: %d, /100: %d, /400: %d\n", durch4, durch100, durch400);
	
	
	return 0;
}