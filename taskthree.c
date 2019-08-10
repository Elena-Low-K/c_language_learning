#include <stdio.h>

int main(void) {

	int num;
	int sev = 7;
	float count;
	float end;
	int k[4] = {1, 3, 5, 7};
	printf("Print the number you want to enter: ");
	scanf("%d", &num);
	if (num > sev) {
		num = sev;
	}
	float nums[num];
	for (int i = 0; i < num; i++) {
		printf("Print numbers: ");
		scanf("%f", &nums[i]);
	}
	for (int i = 0; i < num; i++) {
		count = count + nums[i];
		}
	count = count / num;
	printf("Mean number: %f\n", count);
	for (int i = 0; i < num; i++) {
		end = count * k[i] + (k[i] - 1);
		printf("%d number result: %f\n", k[i], end);
	}

	return 0;}
