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
       /*printf("\nHello World\nI am a robot\nBut I was a human once\nLMAO just kidding\nBye\n\n");
       printf("Value is %.1f\n", zxc);
       printf("This is a '%s'\n", "string");
       zxc=42;
       printf("The answer to the %s is %.1f\n", ggg, zxc);
       printf("The answer to the Ultimate question is 42\n");
       scanf("%d", &a);
       printf("%d\n\n", a);*/

       /* printf("Length of 3 = 2*3*%f\n", pi);
       printf("Area of 3 = 3*3*%f\n", pi);
       printf("Length of 5 = 2*5*%f\n", pi);
       printf("Area of 5 = 5*5*%f\n\n", pi);
       printf("Area of 3 = %d\n\n", area);*/
       scanf("%f", &r);
       length = 2*pi*r;
       area = pi*r*r;
       //printf("Length of User's circle = 2*%f*%f\n", pi, r);
       //printf("Area = %f*%f*%f\n", pi, r, r);
       //printf("Length = %f\n", length);
       printf("Length = %f\n", 2*pi*r);
       printf("Area = %f\n\n", pi*r*r);
       /* printf("%d\n", t + t);
       printf("%d\n", t - t);
       printf("%d\n", t * t);
       printf("%d\n", t / t);*/
       printf("Length of 1 = %f\n", 2*pi*1);
       printf("Length of 2 = %f\n", 2*pi*2);
       printf("Length of 3 = %f\n\n", 2*pi*3);
       printf("Print a radius to start with: \n");

       scanf("%f", &q);
       printf("Print a radius to end with: \n");
       scanf("%f", &end);
       printf("Print frequency: \n");
       scanf("%f", &fre);
       float i;
       for (i = q; i <= end; i=i+fre) {
	       printf("Length of %f = %f\n", i, 2*pi*i); 
	       printf("Area of %f = %f\n\n", i, pi*i*i);
       }
       //printf("aaa %f, %f\n", i-1, end);
       if (i-fre != end) {
	       printf("Length of %f = %f\n", end, 2*pi*end);
               printf("Area of %f = %f\n\n", end, pi*end*end);
       }
       printf("What is your age?\n");
       scanf("%d", &nn);
       //printf("Entered '%s', num = '%d'", nn, xzc);
       switch (nn)
		       {
			       case 5: 
				       printf("You are Anastasia\n");
		                  break;
			       case 15: 
				  printf("You are Olena\n");
		                  break;
                       default: printf("Then you are not Igor's daughter\n"); 
		       };
       
             
       return 0;}
