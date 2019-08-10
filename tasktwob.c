#include <stdio.h>

int main(void) {

	int num;
	int a;
	int b = 0;
	int c = 0;
	int i;
	printf("Print a number for Fibonacci cycle: ");
	scanf("%d", &num);
	printf("Fibanacci cycle. Number %d: %d\n", 0, b);
	a = 1;
	printf("Fibanacci cycle. Number %d: %d\n", 1, a);
	for (i = 2; i <= num; i++) {	
		c = a;
		a = b + a;
		b = c;
		printf("Fibanacci cycle. Number %d: %d\n", i, a);		
	}  

	return 0;
}
