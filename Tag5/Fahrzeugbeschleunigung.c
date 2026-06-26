#include <stdio.h>

	

int main ()
{
	/*4. Ihr Fahrzeug beschleunigt aus dem Stand und fährt für die Dauer von 2 s. Dabei wird alle 100 ms 
	(= 0.1 s) die momentane Geschwindigkeit gemessen und in ein Array geschrieben.
	Die Messwerte für die Geschwindigkeiten sind:*/
	/*• Definierten Sie ein Array speed mit double-Einträgen.*/
	double Speed[] = {0.15, 3.41, 7.47, 10.82, 13.44, 16.57, 19.16, 21.65, 23.66, 24.95, 25.86, 27.14, 27.62, 27.10, 26.62, 26.49, 25.18, 23.50, 21.80, 18.84};
	
	/*• Bestimmen Sie die mittlere Geschwindigkeit (Summe der Einträge geteilt durch die Anzahl der
Einträge)*/
	double MittlereGeschwindigkeit = 0;
	double Summe = 0;
	for(int i = 0; i < 20; i++){
		Summe = Summe + Speed[i];
	}
	MittlereGeschwindigkeit = Summe / 20;
	printf("Mittlere Geschwindigkeit: %.2f", MittlereGeschwindigkeit);
	
	/*• Schreiben Sie alle Werte, die größer sind als der Mittelwert, in ein neues Array. Geben Sie diese
Einträge aus.*/
	
	puts("\nalle Werte, die größer sind als der Mittelwert: ");
	for(int i = 0; i < 20; i++){
		if(Speed[i] > MittlereGeschwindigkeit){
			printf("%.2f, ", Speed[i]);
		}
	}

	return 0;
}