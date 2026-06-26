#include <stdio.h>

	/*1. Schreiben Sie eine Funktion, die die gesetzten Bits in der Binärdarstellung einer gegebenen Zahl zählt
	und zurückgibt.
	Hinweis: Passen Sie den Algorithmus für die dezimale Quersumme an (quersumme.png), sodass
	stattdessen die binäre Quersumme berechnet wird.*/

int Quersumme(int Num){
	
	int Sum = 0;
	while(Num > 0){
		Sum = Sum + Num%2;
		Num = Num/2;
	}

	return Sum;
}

int main ()
{
	printf("Quersumme 255: %i", Quersumme(255));
	
	return 0;
}