#include <stdio.h>

int Array[32];

int querSumme(int num){
    
    while (num > 0){
		for(int i = 0; i < 32; i++){
			Summe = num % 2;
			num = num / 2;
		}
    }
    return Summe;
}

 

int main ()
{
	/*5. (Bonus) Implementieren Sie den Divisions-Algorithmus, um die Binärdarstellung einer Dezimalzahl
zu berechnen.
Hinweis: Speichern Sie die jeweils erhaltenen Ziffern 0 oder 1 in einem int-Array mit ausreichender
Länge (z.B. 32). Geben Sie dessen Einträge am Ende in umgekehrter Reihenfolge aus.*/
	puts("Aufgabe 5. Divisions-Algorithmus");
	
	int DezZahl;
	printf("Geben Sie ein Zahl, um in Binärdarstellung zu berechnen: ");
	if(scanf("%i", &DezZahl) != 1){
		printf("Fehler bei der Eingabe. Geben Sie bitte eine Zahl.\n");
		return 1;
	}
	
	int Index = querSumme(DezZahl);
	
	printf("Binäre Darstellung von %d: ", DezZahl);
    for (int i = Index - 1; i >= 0; i--) {
        printf("%d", Array[i]);
	
	return 0;
}