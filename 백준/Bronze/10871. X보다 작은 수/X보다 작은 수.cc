#include<stdio.h>

int main()
{
    int N1, N2, input;

    scanf("%d %d", &N1, &N2);

    for(int i=0; i<N1; i++){
        scanf("%d", &input);
      
        if(N2>input)
            printf("%d ", input);
    }
}