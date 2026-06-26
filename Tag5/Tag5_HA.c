#include <stdio.h>

int main (void)
{
	/*1. Es soll einen positive Ganzzahl als Nutzereingabe eingelesen werden. Beliebig viele fehlerhafte Eingaben
sollen dabei ignoriert werden.
Hinweis: Verwenden Sie eine do-while-Schleife.*/
	puts("Aufgabe 1.");
	int ganzzahl = 0;
	do{
		puts("Geben Sie bitte einen positive Ganzzahl:");
		if(scanf("%i", &ganzzahl) != 1 ){
			puts("Fehler bei der Eingabe!");
			return 1;
		
		}
		else if(ganzzahl <= 0){
			puts("Ihr Zahl ist <0! Geben Sie bitte einen positive Ganzzahl!");
			//return 1;
		}//end if
	}	
	while(ganzzahl <= 0);
	printf("Echt richtig, dein positive Ganzzahl ist: %i\n", ganzzahl);
	
	return 0;
}