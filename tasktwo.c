#include <stdio.h>

int main(void) {

	int num;
	int i;
	int end = 1;
	printf("Enter factorial number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		end = end * i;
		printf("%d %d\n", i, end);
	}
	printf ("%d\n", end);

	return 0;}
