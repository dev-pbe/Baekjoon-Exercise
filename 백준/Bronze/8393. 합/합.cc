#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	1<=n<=10000;
	
	int sum = 0;
	
	for(int i = 1 ; i <= n ; ++i){
		sum += i;
	}
	printf("%d", sum);
 } 