#include <stdio.h>

int main (void){
	/*1. Verwenden Sie jeweils eine Zählschleife, um
a) alle geraden Zahlen von −4 bis einschließlich +28 */
	puts("\nGerade zahlen von -4 bis 28:\n");
	for(int z = -4; z <= 28; z++){
		if(!(z % 2)){
			printf("%d\n", z);
		}
		}
	
/*b) alle Zahlen aus a), aber nur, wenn sie durch 4 teilbar sind*/
		puts("\nGerade zahlen durch 4 teilbar:\n");
		for(int z = -4; z <= 28; z++){
		if(!(z % 2) && (!(z % 4))){
			printf("%d\n", z);
		}
		}
/*c) alle Zahlen aus a), aber nur, wenn sie nicht durch 4 teilbar sind*/
		puts("\nGerade zahlen, die nicht durch 4 teilbar:\n");
		for(int z = -4; z <= 28; z++){
		if(!(z % 2) && (z % 4)){
			printf("%d\n", z);
		}
		}
/*d) die gleichen Werte aus a), in umgekehrter Reihenfolge*/
		puts("\nGerade zahlen von -4 bis 28 in umgekehrter Reihenfolge:\n");
	for(int z = 28; z >= -4; z--){
		if(!(z % 2)){
			printf("%d\n", z);
		}
		}

/*e) die Summe aller Ganzzahlen von 1 bis 201*/
	int sum = 0;
	for(int z = 0; z <= 201; z++){
		sum = sum + z;
		}
	printf("\ndie Summe aller Ganzzahlen von 1 bis 201: %d\n", sum);
	
/*f) das Produkt aller ungerader Ganzzahlen von 1 bis 201
auszugeben.*/
	unsigned long long sumu = 1;
	for(int z = 0; z <= 201; z++){
		if(z % 2){
			sumu = sumu * z;
		}
	}
	printf("\ndas Produkt ungerader Ganzzahlen von 1 bis 201: %llu\n", sumu);
	
	/*int i, j;
	for(i = 0, j = 0; i <= 3, j = j <= 3; i++, j++)
	{
		printf("%d %d\n", i, j);
	}*/
	{
	/*3. */ 
	puts("\nAufgabe 3.\n");
	int i = 5;
	while (i--);
	printf("%d \n", i);
	}
	
	{/*5. */ 
	puts("\nAufgabe 5.\n");
	int i, j;
	for (i = 0; i < 3; i++) {
	for (j = 0; j < i; j++) {
		printf("*\n");
		}
	}
	}
	/*6. Schreiben Sie ein Programm, welches für die Zahlen von 1 bis 100 folgendes tut:
• Ist die Zahl durch 3 Teilbar, wird BLA ausgegeben.
• Ist die Zahl durch 5 Teilbar, wird BLUB ausgegeben.
• Ist die Zahl durch 15 Teilbar, wird BLABLUB ausgegeben.
• Ansonsten wird die Zahl selbst ausgegeben.
Jede Ausgabe erfolgt in einer neuen Zeile.*/
	puts("\nAufgabe 6:\n");
	for(int z = 1; z <= 100; z++){
		// if(z % 15 == 0){
			// printf("BLABLUB\n");
		// }
		// else if(z % 5 == 0){
			// printf("BLUB\n");
		// }
		// else if(z % 3 == 0){
			// printf("BLA\n");
		// }
		// else {
			// printf("%d\n",z);
		// }
		if(!(z % 15)){
			printf("BLABLUB\n");
		}
		else if(!(z % 5)){
			printf("BLUB\n");
		}
		else if(!(z % 3)){
			printf("BLA\n");
		}
		else {
			printf("%d\n",z);
		} 
		}

	
	return 0;
}