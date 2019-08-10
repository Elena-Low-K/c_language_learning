#include <stdio.h>

int main(void) {
	int i = 1;
	while(1) {
		printf("%d ", i);
		if (i < 10) {
			i = i + 1;
			continue;
		};
		break;
	}
	return 0;
}
