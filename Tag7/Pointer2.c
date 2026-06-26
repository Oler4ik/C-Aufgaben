#include <stdio.h>


int main ()
{
	int zahl = 1846;

	printf("Zahl %d an der Adresse %p\n", zahl, &zahl);
	int *adresse = &zahl;
	
	printf("An der Adresse %p ist der Wert %d gespeichert\n", adresse, *adresse/*Dereferenzierungs Operator*/);
	
	zahl = zahl + 1;
	printf("An der Adresse %p ist der Wert %d gespeichert\n", adresse, *adresse);
	
	
	*adresse = *adresse + 1; //Ändern die Adresse
	printf("Zahl %d an der Adresse %p\n", zahl, &zahl);
	printf("An der Adresse %p ist der Wert %d gespeichert\n", adresse, *adresse);
	
	return 0;
}