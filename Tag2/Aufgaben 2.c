#include <stdio.h>
#include <conio.h>

int main (void)
{
//Aufgabe 1
	printf("Aufgabe 1: \n\v");	//Überschrift

	int Zahl1, Zahl2;				// Deklarierung

	printf("Bitte Zahl 1 für Vergleich angeben: ");
	scanf("%d", &Zahl1);
	printf("Bitte Zahl 2 für Vergleich angeben: ");
	scanf("%d", &Zahl2);
	printf("\n");			// Neue Zeile
			
    if (Zahl1 > Zahl2) {		// Funktion if a größer b?
        printf("%d ist größer als %d\n", Zahl1, Zahl2);
    } else {					// Funktion else falls a kleiner b
        printf("%d ist größer als %d \n", Zahl2, Zahl1);
    }							// Funktion if Ende

	getch();
	printf("\v\v");			// Doppelter vertikaler Tab

//Aufgabe 2
	printf("Aufgabe 2: \n\v");	//Überschrift
	
	printf("char <= int <= long <= long long <= double <= long double \n");	//Ausgabe Ergebnis
	printf("Größe von char: \t%d \n", sizeof(char));						//Ausgabe Sizeof char
	printf("Größe von int: \t\t%d \n", sizeof(int));						//Ausgabe Sizeof int
	printf("Größe von long long: \t%d \n", sizeof(long long));				//Ausgabe Sizeof long long
	printf("Größe von double: \t%d \n", sizeof(double));					//Ausgabe Sizeof double
	printf("Größe von long double: \t%d \n", sizeof(long double));			//Ausgabe Sizeof long double

	getch();
	printf("\v\v");			// Doppelter vertikaler Tab


//Aufgabe 3
	printf("Aufgabe 3: \n\v");	//Überschrift
	
	char eingabe;							//Deklarierung 
	printf("Buchstabe eingeben: ");			//Aufforderung Eingabe
	scanf("%s", &eingabe);					//scanf eingabe
	printf("\n");							// Neue Zeile
	printf("ASCII DEZ Wert: %d \n", eingabe);	//DEZ Wert ausgabe
	printf("ASCII HEX Wert: %x \n", eingabe);	//HEX Wert ausgabe

	getch();	
	printf("\v\v");			// Doppelter vertikaler Tab	

//Aufgabe 4
	printf("Aufgabe 4: \n\v");	//Überschrift
	printf("int easy = 1; \n");	//Text aus Aufgabe 4
	printf("++easy; \n");		//Text aus Aufgabe 4
	printf("easy++; \n");		//Text aus Aufgabe 4
	printf("--easy; \n");		//Text aus Aufgabe 4
	
	
	int easy = 1;
	++easy;
	easy++;
	--easy;
	printf("\v");						// vertikaler Tab
	printf("Ausgabe 1: %d", easy++);
	printf("\n");						// vertikaler Tab
	printf("Ausgabe 2: %d", easy);
	printf("\n");						// Neue Zeile

	getch();
	printf("\v\v");			// Doppelter vertikaler Tab
	
//Aufgabe 5	
/*1 int hard = 1;
2 ++hard;
3 hard = hard++;
4 hard = --hard;
5 printf("%d", hard++ + ++hard);
*/
	printf("Aufgabe 5: \n\v");	//Überschrift
	int hard = 1;
	printf("Zeile 1: int hard = 1; \n\v");
	printf("Wert von hard nach Zeile 1: %d \n", hard);
	++hard;
	printf("Zeile 2: ++hard; \n\v");
	printf("Wert von hard nach Zeile 2: %d \n", hard);	
	hard = hard++;
	printf("Zeile 3: hard = hard++; \n\v");
	printf("Wert von hard nach Zeile 3: %d \n", hard);	
	hard = --hard;
	printf("Zeile 4: hard = --hard; \n\v");
	printf("Wert von hard nach Zeile 4: %d \n", hard);		
	
	printf("Zeile 5: printf(\"%%d\", hard++ + ++hard); \n\v");
	printf("Wert von hard nach Zeile 5: ");
	printf("%d", hard++ + ++hard);

	getch();
	printf("\n\v\v");			// Doppelter vertikaler Tab	

//Aufgabe 6
	printf("Aufgabe 6: \n\n");	//Überschrift
	printf("Modulo irgendwas oder so! \n\v");
	int d, e, ausgabe;
//		d = 100;
//		e = 11;
	printf("Zahl 1 eingeben: ");
	scanf("%d", &d);
	printf("Zahl 2 eingeben:");
	scanf("%d", &e);
	ausgabe = d%e == 0;
	printf("\n");
	if(ausgabe == 1) {
		printf("%d %% %d ist restlos teilbar! \n", d, e);
	} else {
		printf("Ergebnis: %d %% %d ist nicht restlos teilbar! \n", d, e);
	}
	
	getch();
	printf("\n\v\v");			// Doppelter vertikaler Tab		

//Aufgabe 7
	printf("Aufgabe 7: \n\v");	//Überschrift	
	
	int zaehler, nenner;
		zaehler = 22;
		nenner = 7;
	printf("Int: ");
	printf("%d / %d = %d \n", zaehler, nenner, zaehler/nenner);
	printf("Float: ");
	printf("%d / %d = %f \n", zaehler, nenner, (float)zaehler/(float)nenner);
	printf("Double: ");
	printf("%d / %d = %f \n", zaehler, nenner, (double)zaehler/(double)nenner);	
	
	getch();
	printf("\n\v\v");			// Doppelter vertikaler Tab	
	
	
//Aufgabe 8
	printf("Aufgabe 8: \n\v");	//Überschrift
	



}	





//	printf(" \n");