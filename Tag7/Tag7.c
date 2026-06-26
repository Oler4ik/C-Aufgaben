#include <stdio.h>


void druksumme(int limit){
	int summe = 0;
	for(int i = 0; i <= limit; i++){
		summe = i + summe;
		printf("%d\n", summe); // summe wird hier gelöscht
	}
}
int aufrufe = 0; //globale Variable
void dummy(){
	aufrufe = aufrufe + 1;
	printf("Aufruf Nummer %d\n", aufrufe);
}

int main ()
{
	int grenzwert;
	printf("Bitte gib ein Zahl ein: ");
	scanf("%d\n", &grenzwert);
	
	druksumme(grenzwert);
	//printf("%d", summe);
	dummy();
	dummy();
	dummy();
	dummy();
	
	return 0;
}