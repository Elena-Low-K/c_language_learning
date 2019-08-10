#include <stdio.h>

int main(void) {
	
	int num;
	int sev = 7;
	int i;
	printf("Print the number you want to enter: ");
	scanf("%d", &num);
	if (num > sev) {
		num = sev;
	}
	float nums[num];
	for (i = 0; i < num; i++) {
		printf("Print numbers: ");
		scanf("%f", &nums[i]);
	}
	float count;
	for (i = 0; i < num; i++) {
		count = count + nums[i];
	}
	count = count / num;
	printf("%f\n", count);

	return 0;}
