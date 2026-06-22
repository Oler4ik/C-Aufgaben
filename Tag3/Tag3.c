#include <stdio.h>

int main()
{
	int zahl = 0;
	char groese = 'k';
	
	puts("Ist die Zahl größer oder kleiner 10");
	puts("Gib ein Zahl:");
	
	scanf("%d", &zahl);
	
	/*  if (zahl >= 10){
		groese = 'g';
		printf("Die Zahl %d ist groß", zahl);
	 }
	 else {
		groese = 'k';	 
		printf("Die Zahl %d ist klein", zahl);
	 }
	printf("Die Zahl is: %c\n", groese); */
	
	switch (zahl){
	case 1:
	puts("eins");
	break;
	
	case 2:
	puts("zwei");
	break;
	
	case 3:
	puts("drei");
	break;
	
	default: 
	puts("an haufa");
	}
	 return 0;
}