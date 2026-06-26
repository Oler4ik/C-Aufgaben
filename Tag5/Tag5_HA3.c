#include <stdio.h>

int main (void)
{
	/*3. Spielen Sie eine Runde Tic-Tac-Toe:*/
	puts("Aufgabe 3.");
	//• Definieren Sie ein 2-dimensionales char-Array mit 3 × 3 Einträgen.
	//• Initialisieren Sie es auf insgesamt 9 Leerzeichen.
	char array[3][3] = { {' ',' ',' '} , {' ',' ',' '} , {' ',' ',' '}};
	//char array[3][3] = {' '};
	
	//• Für jeden Spielzug setzen Sie ein ’O’ oder ein ’X’ an die richtige Stelle.
	
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
		if(scanf("%c", &array[i][j]) != 1 ){
		puts("Fehler bei der Eingabe!");
		return 1;	
		}
		
	}
	}
	puts("Sie haben gegeben: ");
	for(int i = 0; i < 3; i++){
		printf("%i ", array[i]);
	}
	puts("");
	return 0;
}