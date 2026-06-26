#include <stdio.h>

	/*2. Es sollen jeweils die letzten 10 Werte eines Messgerätes im Speicher behalten werden.
• Definieren Sie dazu ein Array (globale Variable, vor der main()-Funktion) mit 10 Einträgen vom
Typ double und setzen Sie alle Werte auf 0.*/
double Array[10] = {0}; 

/*• Definieren Sie eine globale Variable stelle, die die aktuelle Position im Array speichern wird.*/
int Stelle;

/*• Schreiben Sie eine Funktion void setze_wert(double wert) {...}, die einen Messwert an
die aktuelle Stelle setzt und stelle um 1 erhöht. Wenn es die letzte Stelle ist, soll die aktuelle
Stelle auf 0 springen.*/
// void SetzeWert(double Array[10]){
	// for(Stelle = 0 ; Stelle <10; Stelle++){
		// printf("Geben Sie Messwert %d ein: \n", Stelle+1);
		// scanf("%lf ", &Array[Stelle]);
	// }
// }

/*• Schreiben Sie eine Funktion void letzte_werte() {...}, die diese 10 gespeicherten Werte
ausgibt, und zwar in der Reihenfolge, in der sie gespeichert wurden.*/
void LetzteWerte(){
	
}

int main ()
{
	
	for(int i = 0 ; i < 10; i++){
		printf("Geben Sie Messwert %d ein: \n", i+1);
		scanf("%lf ", &Array[i]);
	}
	
	
	return 0;
}