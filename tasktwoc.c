#include <stdio.h>

int main(void) {

	int num;
	float show = 1;
	int i;
	float other = 1;
	//float ot;
	printf("Print the number you want to count: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
	// I start with `1 to save an operation below.
		printf("Number %d: %f\n", i, other);
		show = show / -2;
		other = show + other;
		
	}

	return 0;
}
