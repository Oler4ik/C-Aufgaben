#include <stdio.h>

int Global1 = 10; Global2 = -3;

void tausch1(int x, int y){
	int temp = x;
	x = y;
	y = temp;
	printf("%d und %d getauscht: \n", x,y);
	
	temp = Global1;
	Global1 = Global2;
	Global2 = temp;
	printf("%d und %d getauscht: \n", Global1,Global2);
}

void tausch2(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("Mit Point*: %d und %d getauscht: \n", *x,*y);
	printf("Mit Point: %d und %d getauscht: \n", x,y);
}

void setze0(int *x){
	*x = 0;
	
}

int main ()
{
	int a = 10, b = -3;
	printf("a - %d und b - %d getauscht. \n", a,b);
	tausch1(a,b); //tausch1 (10, -3) 
	printf("a - %d und b - %d getauscht. \n", Global1, Global2);
	
	tausch2(&a, &b);
	printf("a - %d und b - %d getauscht. \n", a,b);
	
	setze0(&b);
	printf("a - %d und b - %d getauscht. \n", a,b);
	
	return 0;
}