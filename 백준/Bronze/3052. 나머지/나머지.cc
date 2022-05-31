#include <stdio.h>
#define SIZE 10

int main()
{
	int num, result = 0;
	int arr[SIZE] = {0};
	
	for (int i = 0; i < SIZE; i++){
		scanf("%d", &num);
		arr[i] = num % 42;
	}
	
	for (int i = 0; i < SIZE; i++){
		int count = 0;
		
		for (int j = i+1; j < SIZE; j++){
			if (arr[i] == arr[j]){
				count++;
			}
		}
		if (count == 0){
			result++;
		}
	}

	printf("%d", result);
	
	return 0;
}
