#include <stdio.h>

int main()
{
	int A, B;
	-10000<= A, B <= 10000;
	
	scanf("%d %d", &A, &B);
	
	if(A>B){
		printf(">");
	}
	else if(A<B){
		printf("<");
	}
	else{
		printf("==");
	}
	return 0;
}