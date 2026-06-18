#include <stdio.h>

int main(void) {
	//1.Deklarieren Sie mit einem Befehl zwei Variablen x, y vom Typ short:
	short x, y, xx, yy;
	/*2. Weisen Sie beiden einen positiven Wert zu.
Lassen Sie jeweils den Dezimal-, Oktal- und Hexadezimalwert von x und y mittels printf und dem
passenden Formatierer ausgeben. Funktioniert das auch mit negativen Zahlen?*/
	x=90;
	y=173;
	printf("\vAufgabe 1-2\n");
	printf("x in Dez: %d\ty in Dez: %d\n", x,y);
	printf("x in Okt: %o\ty in Okt: %o\n", x,y);
	printf("x in Hex: %x\ty in Hex: %x\n", x,y);
	
	//Funktioniert das auch mit negativen Zahlen? - geht andere positive Zahl
	/*xx=-56;
	yy=-121;
	printf("-x: %hu\n-y: %u\n", xx,yy);*/
	x=-56;
	y=-121;
	printf("\vAufgabe 3\n");
	printf("-x: %hd\t\t\t-y: %hd\n", x,y);
	
	/*3. Ermitteln Sie mittels des Operators sizeof die Speichergröße von x oder y (oder jeder anderen
Variable vom Typ short). */
	
	printf("Groesse von x: %d Byte\tGroesse von y: %d Byte\n", sizeof(x), sizeof(y));
	
	/*Was ist also die größte (und welche die kleinste) Zahl dieses Datentyps?
	+32767 ... -32768*/ 
	
	/*4. Bearbeiten Sie die vorige Frage nun mit der Zusatzdeklaration unsigned.*/
	unsigned short xu, yu;
	xu=-56;
	yu=-121;
	printf("\vAufgabe 4\n");
	printf("unsigned x in Dez: %hu\tunsigned y in Dez: %hu\n", xu,yu);
	printf("Groesse von unsigned x: %d Byte\tGroesse von unsigned y: %d Byte\n", sizeof(xu), sizeof(yu));
	
	return 0;
}