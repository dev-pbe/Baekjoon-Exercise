#include <stdio.h>
int main()
{
	int A, B, C; 
	2 <= A, B, C <= 10000;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", (A+B)%C);
	printf("%d\n", ((A%C)+(B%C))%C);
	printf("%d\n", (A*B)%C);
	printf("%d", ((A%C)*(B%C))%C);
 }