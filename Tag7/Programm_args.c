#include <stdio.h>


int main (int argc, char **argv)
{
	double arr[] = {2.3, 6.5, 3.14, 6.28, 9.9, 9.0};
	printf("\nEintrag an der Stelle 4: %.4lf\n", arr[4]);
	printf("%.4lf == 9.9? %d\n",arr[4], arr[4] == 9.9);
	printf("%.4lf == 9.9? %d\n",arr[4], arr[4] == (3.3 + 3.3 + 3.3));
	printf("%.4lf == 9.9? %d\n",arr[4], arr[4] == (10 - .1));
	
	printf("%.4lf == 9.9? %d\n", *(arr+4));
	
	
	return 0;
}