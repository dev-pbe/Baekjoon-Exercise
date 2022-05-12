#include <stdio.h>
#define SIZE 10

int main()
{
    int input, sum=1;
    int num[SIZE];
    
    for(int i=0; i<SIZE; i++) {
    	num[i] = 0;
	}
    
    for(int i=0; i<3; i++) {
        scanf("%d", &input);
        sum *= input;
    }
    
    for(int i=0; sum > 0; i++) {
        input = sum % 10;
        num[input] += 1;
        sum /= 10;
    }
    
    for(int i=0; i<SIZE; i++){
    	printf("%d\n", num[i]);
	}
}