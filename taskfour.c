#include <stdio.h>

int main(void) {
	int num;
	printf("Print the number: ");
	scanf("%d", &num);
	//int nums[num];
	// pattern begin
	for (int i = 1; i <= num; i = i + 1) {
		printf(" %d", i * 1);
	}
	printf("\n");
	// pattern end
	for (int i = 1; i <= num; i = i + 1) {
		printf(" %d", i * 2);
	}
	printf("\n");
	for (int i = 1; i <= num; i = i + 1) {
		printf(" %d", i * 3);
	}
	printf("\n");
	for (int i = 1; i <= num; i = i + 1) {
		printf(" %d", i * 4);
	}
	printf("\n");

	for (int b = 1; b <= num; b = b + 1) {
		for (int i = 1; i <= num; i = i + 1) {
			printf(" %d", i * b);
		}
		printf("\n");
	}	
/*
	for (int i = 1; i <= num; i = i + 1) {
		printf(" %d, %d, %d, %d\n", i * 1, i * 2, i * 3, i * 4);
	}
*/
	return 0;
}
