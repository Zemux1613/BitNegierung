#include <stdio.h>

int main() {

	// 2er Komplement

	printf("Bitte gebe eine Zahl ein für welche die das 2er komplement haben willst: ");

	int input;
	scanf_s("%d", &input);

	printf("%d ist negiert %d", input,~(input));
	return 0;

}