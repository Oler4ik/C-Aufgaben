#include <stdio.h>

int Sum(int Start, int End, int Step);

//Achtung! 
// int *Sump(int Start, int End, int Step){
	// int Summe = 0;
	// for(int i = Start; i < End; i+=Step)
	// {
		// Summe += i;
	// }
	// return &Summe; //Variable existiert nicht mehr
// }

int main ()
{
	// int Summe = 0;
	// int i;
	// for(i = 1; i < 12; i+=3){
		// printf("%d ", i);
		// Summe += i;
	// }
	// printf("i nach for: \n");
	// printf("%d ", i);
	// printf("\nSumme for: %i", Summe);

	// Summe = 0;
	// i = 1;
// while(++i < 12){
	// Summe += i;
	// i += 2;
// }
	// printf("\nSumme While:%d \n", Summe);	
	
// for(i=0; i < 5; i++){
	// i++;
// }	
	// printf("i in for: %d ", i);
	
	
// for(i=0; i < 5; i++){
	// --i;
// }	
	// printf("i in for: %d ", i);


int a = 0;
do {
	a++;
}
while(a < 5);
	printf("a in do while: %d \n", a);
	
	printf("Summe von Funktion: %d\n", Sum(0,12,2));
	
	int *zahlp;
	int zahl = 30;
	zahlp = &zahl;
	
	*zahlp = zahl;//Funktioniert nicht ohne Zuweisung: zahlp = &zahl;
	
	printf("zahlp: %p, zahl: %d, *zahlp: %d\n", zahlp, zahl, *zahlp);
	
	printf("zahlp: %p, zahl: %d\n", zahlp, zahl); //das gleiche wie darüber
	
	printf("zahlp: %p, *zahlp+1: %d\n", zahlp, *zahlp+1);//(*zahlp)+1
	
	printf("zahlp: %p, *(zahlp+1): %d\n", zahlp, *(zahlp+1));
	
return 0;
}

int Sum(int Start, int End, int Step){
	int Summe = 0;
	for(int i = Start; i < End; i+=Step)
	{
		Summe += i;
		
	}
	return Summe;
}