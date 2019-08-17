#include <stdio.h>

int main(void) {
	float zxc = 1.2;
	char* ggg = "Ultimate Question";
	int a;
	float r;
	float length;
	int area;
	int t = 10;
	float q;
        float end;
	int nn;
        float fre;

	int exa[11];
	double pi = 3.141592653589793238462643383279502884197169399375105820974944;

	int print(); {

	scanf("%f", &q);
	printf("Print a radius to end with: \n");
	scanf("%f", &end);
	printf("Print frequency: \n");
   	scanf("%f", &fre);
       	
	
	printf("Length = %f\n", 2*pi*r);
	printf("Area = %f\n", pi*r*r);
	printf("Difference = %f\n", (pi*r*r-2*pi*r));
	printf("Ratio = %f\n", ((pi*r*r)/(2*pi*r)));
	
	float i;
	for (i = q; i <= end; i=i+fre) {
		printf("Length of %f = %f\n", i, 2*pi*r);
		printf("Area of %f = %f\n\n", i, pi*i*i);
		printf("Difference = %f\n", (pi*i*i-2*pi*r));
		printf("Ratio = %f\n", ((pi*i*i)/(2*pi*r)));

	 }
       
       if (i-fre != end) {
		printf("Length of %f = %f\n", end, 2*pi*end);
		printf("Area of %f = %f\n", end, pi*end*end);
		printf("Difference = %f\n", (pi*end*end-2*pi*end));
		printf("Ratio = %f\n\n", ((pi*end*end)/(2*pi*end)));
		 }
		return 0; 
	}             
       return 0;
}
