#include <stdio.h>
 
int main(void) {
	
	int gender;
	int Female = 1;
	int Male = 0;
        int num = 4;

        struct peo{
        char name;
	int age;
        float height;
	float weight;
	int gender;
        };

        struct peo Ig;
        struct peo Ma;
        struct peo Ol;
        struct peo An;

        Ig.age = 40;
        Ma.age = 36;
        Ol.age = 15;
        An.age = 6;

	Ig.weight = 90;
	Ma.weight = 50;
	Ol.weight = 50;
	An.weight = 18;

	(gender = 0); Male : Female;

	Ig.gender = 0;
	Ma.gender = 1;
	Ol.gender = 1;
 	An.gender = 1;
 
        Ig.height = 172;
        Ma.height = 164;
        Ol.height = 162;
	An.height = 120;

        //for (int i = 0; i < num; i++) {

        printf("Igor. Age is %d. Height is %f. Weight is %f. Gender is %d.\n", Ig.age, Ig.height, Ig.weight, Ig.gender);
        printf("Maryna. Age is %d. Height is %f.Weight is %f. Gender is %d.\n", Ma.age, Ma.height, Ma.weight, Ma.gender);
        printf("Olena. Age is %d. Height is %f.Weight is %f. Gender is %d.\n", Ol.age, Ol.height, Ol.weight, Ol.gender);
        printf("Anastasia. Age is %d. Height is %f.Weight is %f. Gender is %d.\n", An.age, An.height, An.weight, An.gender);

        //}
        return 0;
        }
