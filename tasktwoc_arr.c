#include <stdio.h>

int main(void) {

	int num;
	float show = 1;
	int i;
	float other = 1;
	//float ot;
	printf("Print the number you want to count: ");
	scanf("%d", &num);
	float arr[num];
	for (i = 0; i < num; i++) {
		show = show / -2;
		arr[i] = show;
	}
	for (i = 0; i < num; i++) {
		other += arr[i];
	}

	printf("Number: %f\n", other);

	return 0;
}
