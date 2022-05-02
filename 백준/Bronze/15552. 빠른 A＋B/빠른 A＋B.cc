#include <stdio.h>

int main()
{
	int a, b, t;
	
	1 <= t <= 1000000;
	1 <= a, b <= 1000;
	
	scanf("%d", &t);
	
	for(int i = 1 ; i <= t ; ++i){
		scanf("%d %d", &a, &b);
		printf("%d \n", a+b);
	}
	return 0;
}