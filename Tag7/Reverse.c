#include <stdio.h>
#include <string.h>
#define MAX 255
void Reverse(char S[], int SL){
	
	for(int i = SL-1; i >= 0; i--){
		printf("%c", S[i]);
	}
}

int main ()
{
	/*3. Schreiben Sie eine Funktion reverse, die einen String als Argument annimmt und rückwärts ausgibt
(print).*/
	puts("Aufgabe 3. Revers");
	puts("Schreiben Sie etwas: ");
	char String[MAX];
	fgets(String, sizeof(String), stdin); //Einlesen von String
	int StringLength = strlen(String);
	printf("\nUmgekehrt: \n");
	Reverse(String, StringLength);
	
	return 0;
}