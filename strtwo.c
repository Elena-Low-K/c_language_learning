#include <stdio.h>

#define MALE 0
#define FEMALE 1

int main(void) {
	
	int i;
	int num = 4;
		struct people {
		char* name;
		int age;
		float height;
		float weight;
		unsigned int gender;
	};
	
	char female;
	char male;

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

	peo[0].weight = 90;
	peo[1].weight = 52;
	peo[2].weight = 50;
	peo[3].weight = 18;

	peo[0].gender = MALE;
	peo[1].gender = FEMALE;
	peo[2].gender = FEMALE;
	peo[3].gender = FEMALE;

	//(peo[i].gender > 0) ? "male" : "female";

	for (int i = 0; i < num; i++){
		printf("Name is %s. Age is %d. Height is %f. Weight is %f. Gender is %s\n", peo[i].name, peo[i].age, peo[i].height, peo[i].weight, (peo[i].gender == MALE) ? "male" : "female" /*peo[1].gender*/);
	}
	return 0;
	}
