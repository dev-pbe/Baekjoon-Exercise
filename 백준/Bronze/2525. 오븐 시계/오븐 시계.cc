#include <stdio.h>

int main() {

	int A, B, C;

	scanf("%d %d", &A, &B);

	scanf("%d", &C);

	A += C / 60;

	B += C % 60;

	if(B >= 60) {

		A++;
		B %= 60;

	}

	if(A >= 24){
		A %= 24;
	}

	printf("%d %d\n", A, B);

	return 0;

}