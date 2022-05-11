#include <stdio.h>
#define SIZE 9

int main()
{
	int arr[SIZE];
	
	int i;
	for(i = 0; i < SIZE; i++){
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0], max_index = 0;
    for(i = 0; i < SIZE; i++){
        if(arr[i] > max){
        	max = arr[i];
            max_index = i;
		}
    }
    
    printf("%d\n", max);
    printf("%d", max_index + 1);
}