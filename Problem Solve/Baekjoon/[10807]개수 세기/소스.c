#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[]) {
	int number;
	int wanted;
	int count = 0;
	int* array;

	scanf_s("%d", &number);
	array = (int*)malloc(sizeof(int) * number);

	for (int i = 0; i < number; i++) {
		int n;
		scanf_s("%d", &n);
		array[i] = n;
	}

	scanf_s("%d", &wanted);
	for (int i = 0; i < number; i++) {
		if (array[i] == wanted) {
			count += 1;
		}
	}

	printf("%d\n", count);
}