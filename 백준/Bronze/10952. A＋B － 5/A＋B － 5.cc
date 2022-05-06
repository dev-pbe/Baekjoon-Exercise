#include <stdio.h>

int main()
{
	int N1, N2;
	
	while(1){
		scanf("%d %d", &N1, &N2);
		if(N1 == 0 && N2 == 0)
			break;
		printf("%d\n", N1 + N2);
	}
	return 0;
}