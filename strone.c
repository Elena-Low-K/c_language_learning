#include <stdio.h>

int main(void) {

	int num = 4;
	struct peo{
	char name;
	int age;
	float height;
	};
	
	struct peo Ig;
	struct peo Ma;
	struct peo Ol;
	struct peo An;
	
	Ig.age = 40;
	Ma.age = 36;
	Ol.age = 15;
	An.age = 6;

	Ig.height = 172;
	Ma.height = 164;
	Ol.height = 162;
	An.height = 120;

 	//for (int i = 0; i < num; i++) {
  
	printf("Igor. Age is %d. Height is %f.\n", Ig.age, Ig.height); 
	printf("Maryna. Age is %d. Height is %f.\n", Ma.age, Ma.height);
	printf("Olena. Age is %d. Height is %f.\n", Ol.age, Ol.height);
	printf("Anastasia. Age is %d. Height is %f.\n", An.age, An.height);

	//}
	return 0;
	}
