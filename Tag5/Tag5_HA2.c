#include <stdio.h>

int main (void)
{
	/*2. Lesen Sie ein Array mit fester Länge über scanf ein. Geben Sie die Einträge in umgekehrter Reihenfolge
aus.*/
	puts("Aufgabe 2.");
	printf("Geben Sie 3 Zahlen: \n");
	int array[3];
	for(int i = 0; i < 3; i++){
		if(scanf("%i", &array[i]) != 1 ){
			puts("Fehler bei der Eingabe!");
			return 1;
		}
	}
	puts("Sie haben gegeben: ");
	for(int i = 2; i >= 0; i--){
		printf("%i \n", array[i]);
	}
	puts("");
	return 0;
}