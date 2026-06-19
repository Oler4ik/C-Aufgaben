#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>

int main(void) {
	{
	/*1. Schreiben Sie eine Anweisung, die zwei Zahlen miteinander vergleicht und die gr��ere ausgibt.*/
	int x = 5,
		y = 10;
	int max=(x>y)?x:y;
	printf("Aufgabe 1\n");
	printf("x: %d\ny: %d\n", x,y);
	printf("Der größte Zahl: %d\n", max);
	}
	{
	/*2. Ordnen Sie die Datenformate int, long, long double, double, char, long long aufsteigend
nach Speicherbedarf an.*/
	printf("\nAufgabe 2\n");
	printf("sizeof(char): %zu\n", sizeof(char));
	printf("sizeof(short): %zu\n", sizeof(short));
	printf("sizeof(int): %zu\n", sizeof(int));
	printf("sizeof(long): %zu\n", sizeof(long));
	printf("sizeof(long long): %zu\n", sizeof(long long));
	printf("sizeof(double): %d\n", sizeof(double));
	printf("sizeof(long double): %d\n", sizeof(long double));
	}
	{
	/*3. Schreiben Sie ein Programm, das einen beliebigen Buchstaben mit scanf einliest und den zugehörigen
ASCII-Zahlenwert ausgibt (dezimal und hexadezimal).*/
	printf("\nAufgabe 3\n");
	printf("Schreib einen Buchstabe: \n");
	char b = 0;
	scanf("%c", &b);
	printf("Buchstabe: %c\n",b);
	printf("ASCII-Zahlenwert (Dez): %d, \nASCII-Zahlenwert (Hex): %x\n",b,b);
	}
	{
	/*4. Binden Sie den folgenden Code-Schnipsel in ein Skript ein und kompilieren Sie es: Was wird ausgegeben?*/
	printf("\nAufgabe 4\n");
	int easy = 1;
	++easy;
	easy++;
	--easy;
	printf("easy++: %d\n", easy++);
	printf("easy: %d\n", easy);
	}
	{
	/*5. Welchen Wert hat die Variable hard nach jeder Zeile?*/
	printf("\nAufgabe 5\n");
	int hard = 1;
	++hard;
	hard = hard++;
	hard = --hard;
	printf("hard++ + ++hard: %d\n", hard++ + ++hard);
	}
	{
	/*6. Es seien zwei Ganzzahlen a, b gegeben. Deklarieren Sie eine Boolsche Variable und weisen Sie ihr
den Wahrheitswert „a ist durch b ohne Rest teilbar, oder umgekehrt“ zu.*/
	printf("\nAufgabe 6\n");
	int a = 125, 
		b = 5;
	bool boo;
	boo = ((a%b)==0)? true:false;
	printf("a: %d\nb: %d\n", a,b);
	printf("a ist durch b ohne Rest teilbar(1:Ja, 0:Nein): %d\n", boo);
	}
	{
	/*7. Berechnen Sie nach der Definition*/	
	printf("\nAufgabe 7\n");
	int zaehler = 22,
		nenner = 7;
	printf("Definition: \n(int): %d\n", zaehler/nenner);
	printf("(float): %.20f\n", (float)zaehler/nenner);
	printf("(double): %.20f\n", (double)zaehler/nenner);
	printf("\nGenauigkeit:\n(float): %d\n(double): %d\n", FLT_DIG, DBL_DIG );
	
	}	
	{
	/*8. Dechiffrieren Sie folgende hexadezimalen Daten mit dem XOR-Operator ^ und dem Schlüssel (3F)16.*/	
	printf("\nAufgabe 8\n");
	unsigned char Daten[32] = {0x6c, 0x4f, 0x56, 0x5c, 0x5a, 0x1f, 0x56, 0x4c, 0x1f, 0x4b, 0x57, 0x5a, 0x1f, 0x54, 0x5a, 0x46, 0x1f, 0x4b, 0x50, 0x1f, 0x4c, 0x4f, 0x5e, 0x5c, 0x5a, 0x1f, 0x4b, 0x4d, 0x5e, 0x49, 0x5a, 0x53};
	char Key = 0x3F;
	//unsigned char Daten2[32];
	
	for (int i = 0; i <= 31; i++)
	{
		//Daten2[i] = Daten[i] ^ Key;
		printf("%c", Daten[i] ^ Key);
	}
		//printf("%s\n", Daten2);
	
	}	
	return 0;
	
}