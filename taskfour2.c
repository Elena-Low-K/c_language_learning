#include <stdio.h>

int main(void) { int num; printf("Print the number: "); scanf("%d", &num); int a = 1; int b = 12; a = 5; for (int i = 1; i <= num; i = i + 1){ printf(" %d", i * 1); }; printf("\n"); for (int i = 1; i <= num; i = i + 1) { printf(" %d", i * 2); }; printf("\n"); for (int i = 1; i <= num; i = i + 1) { printf(" %d", i * 3); }; printf("\n"); for (int i = 1; i <= num; i = i + 1) { printf(" %d", i * 4); }; printf("\n"); return 0; }
