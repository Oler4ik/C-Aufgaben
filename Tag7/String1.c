#include <stdio.h>
#include <string.h>
//Funktion gibt Length von String
int StringLength();

int main ()
{
	//printf("Hallo!");
	char str1[32] = "hallo!";
	char str2[] = {'H', 'a', 'l', 'l', 'o', '!', '\0'};
	char str3[] = "Hallo!";
	char keinString[] = {'H', 'a', 'l', 'l', 'o', '!'};
	
	printf("%s\n", str1);
	printf("%s\n", str2);
	
	for(int i = 0; i < 32; i++){
		if(str1[i] == '\0'){
			printf("_ ");
		}
		else{
			printf("%c ", str1[i]);
		}
		
	}
	puts("");
	
	for(int i = 0; i < 7; i++){
		if(str3[i] == '\0'){
			printf("_ ");
		}
		else{
			printf("%c ", str3[i]);
		}
		
	}
	
	puts("");
	
	printf("Lenge von String 1: %d\n", strlen(str1));
	
	char str4[10];
	strcpy(str4, str1);
	printf("%s\n", str4);
	printf("String1: %s\nString4: %s\n%d\n", str1, str4, strcmp(str4, str1));
	
	
	printf("String3: %s\nString1: %s\n%d\n", str3, str1, strcmp(str3, str1));
	
	return 0;
}