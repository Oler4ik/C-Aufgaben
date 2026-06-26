#include <stdio.h>

int Position(char Array[], char c, int len){
	printf("Tatsächliche Länge des Arrays: %d\n", sizeof(Array)/sizeof(char));
	//len = sizeof(Array)/sizeof(char); 
	for(int i = 0; i < len; i++){
		if(Array[i] == c){
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
	char Suchbereich[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int Lenge = 6;
	char Buchstabe;
	printf("Geben Sie eine Buchstabe von a bis f,die danach gesucht wird: ");
	if(scanf("%c", &Buchstabe) != 1){
		printf("Fehler bei der Eingabe. Geben Sie bitte eine Buchstabe von a bis f.\n");
		return 1;
	}
	
	printf("Ihre Buchstabe %c befindet sich an der Position: %d\n", Buchstabe, Position(Suchbereich, Buchstabe, Lenge)); 
	printf("Ihre Buchstabe 'b' befindet sich an der Position: %d\n", 'b', Position(Suchbereich, 'b', Lenge)); 
	
	printf("Tatsächliche Länge des Arrays: %d\n", sizeof(Suchbereich)/sizeof(char));
	
	printf("Buchstabe aud der ersten Position: %c\n", Suchbereich[0]);
	printf("Buchstabe aud der ersten Position: %c\n", *Suchbereich);
	
	printf("Buchstabe aud der zweiten Position: %c\n", Suchbereich[1]);
	printf("Buchstabe aud der zweiten Position: %c\n", *Suchbereich + 1);
	
	printf("Buchstabe aud der zweiten Position: %c\n", *(Suchbereich + 1)); //erhöcht die Speicher Adresse um eins = sizeof(char) und liefert Inhalt: Arr[1]
	
	printf("Buchstabe aud der zweiten Position: %c\n", 1[Suchbereich]);
	
	
	double Array2[] = {12.5, 2.5, 1.5E-2};
	printf("%lf %lf %lf\n", Array2[0], Array2[1], Array2[2]);
	printf("%p %p %p\n", &Array2[0], &Array2[1], &Array2[2]);
	printf("%p %p %p\n", Array2, Array2 + 1, Array2 + 2);
	
	printf("%d\n", Array2 == &Array2[0]); //Vergleich von Werterns
	
	return 0;
}