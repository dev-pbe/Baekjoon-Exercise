#include <stdio.h>

int main()
{
	int N, result, count=0;
	int a, b, c, d=-1;
	scanf("%d", &N);
	
	0<=N<=99;
	
	result = N;
	
	while(d != result){
		a = N/10;
		b = N%10;
		c = (a+b)%10;
		d = 10*b+c;
		N = d;
		count++;
	}
	printf("%d", count);
}