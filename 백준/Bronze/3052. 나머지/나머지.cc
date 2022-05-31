#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int arr[10] = {0};
	int brr[42] = {0};
	int count = 0;

	for(int i=0;i<10;i++){
		scanf("%d", arr+i);
		brr[arr[i] %42] = 1;
	}
	
	for(int i = 0;i<42;i++){
		if(brr[i] == 1)
		count++;
	}
	
	printf("%d", count);
	
	return 0;
}