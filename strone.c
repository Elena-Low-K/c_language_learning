#include <stdio.h>

int main(void) {

	int num = 4;
	struct people {
		char* name;
		int age;
		float height;
	};
	
	struct people peo[4];
	
	peo[0].name = "Igor";
	peo[1].name = "Maryna";
	peo[2].name = "Olena";
	peo[3].name = "Anastasiia";

	peo[0].age = 40;
	peo[1].age = 36;
	peo[2].age = 15;
	peo[3].age = 6;

	peo[0].height = 172;
	peo[1].height = 164;
	peo[2].height = 162;
	peo[3].height = 120;

 	for (int i = 0; i < num; i++){
  		printf("Name is %s. Age is %d. Height is %f.\n", peo[i].name, peo[i].age, peo[i].height);	
	}
	return 0;
	}
