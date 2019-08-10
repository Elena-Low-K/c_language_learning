#include <stdio.h>
#include <math.h>

int main(void) {
	int ang[7] = {0, 30, 45, 60, 90, 180, 270};
	//int ang = 30;
	float pi = 3.1415;
	//float rad = ang*pi/180;
	//float s = sin(rad);
	for (int i = 0; i <= 6; i++) {
	float rad = ang[i]*pi/180;
	float s = sin(rad);
	printf("sin of %d is equal to %f\n\n", ang[i], s);  
//	printf("ang is %d and i is %d\n", ang[i], i);
	}
	//printf("sin of %d is equal to %f\n", ang, s);


return 0;}
