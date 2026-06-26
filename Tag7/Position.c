#include <stdio.h>
#define MAX 10

int Position(int Array[MAX], int z){
	for(int i = 0; i < MAX; i++){
		if(Array[i] == z){
			return i;
		}
	}	
	return -1;	
}

int main()
{
	/*1. Gesucht ist eine Funktion position(), die in einem gegebenen int-Array eine Zahl sucht und
den ersten Index zurückgibt, an der sich die Zahl befindet. Ist die Zahl nicht im Array, soll −1
zurückgegeben werden.*/

	puts("Aufgabe 1. Suchfunktion");
	int Suchbereich[] = {1,2,3,4,5,6,7,8,9,10};
	int Zahl;
	printf("Geben Sie eine Zahl von 1 bis 10,die danach gesucht wird: ");
	if(scanf("%i", &Zahl) != 1){
		printf("Fehler bei der Eingabe. Geben Sie bitte eine Zahl von 1 bis 10.\n");
		return 1;
	}
	int Pos = Position(Suchbereich, Zahl);
	printf("Ihre Zahl %d befindet sich an der Position: %d\n", Zahl, Pos); 
	
	return 0;
}