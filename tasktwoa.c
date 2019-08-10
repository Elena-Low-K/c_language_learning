#include <stdio.h>

int main(void) {
	
	int num;
	int i;
	printf("Print the number for the last number to square: ");
	scanf("%d\n", &num);
	for (i = 1; i <= num; i++) {
		printf("Square of %d: %d\n", i, i*i);
	}

	return 0;}
