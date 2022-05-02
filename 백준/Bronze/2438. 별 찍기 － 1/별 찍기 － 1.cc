#include <stdio.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){ //세로
		for(j = 1; j <= i; j++){ //가로
			printf("*");
		}
		printf("\n");
	}
}