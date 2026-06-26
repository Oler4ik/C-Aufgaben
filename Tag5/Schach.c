#include <stdio.h>


	/*5. Erstellen Sie ein Schachfeld als char-Array (mit 8×8 Felder). Platzieren Sie alle nötigen Spielfiguren
für den Spielstart.*/

int main ()
{
	char schachfeld[8][8] = {{'T','H','O','K','Q','O','H','T'}, 
							{'P','P','P','P','P','P','P','P'}, 
							{'.','.','.','.','.','.','.','.'}, 
							{'.','.','.','.','.','.','.','.'}, 
							{'.','.','.','.','.','.','.','.'},
							{'.','.','.','.','.','.','.','.'}, 
							{'P','P','P','P','P','P','P','P'}, 
							{'T','H','O','K','Q','O','H','T'}};
	
    for (int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++){
			printf("%c ", schachfeld[i][j]);
		}
		puts("");	
    }
	
	return 0;
}