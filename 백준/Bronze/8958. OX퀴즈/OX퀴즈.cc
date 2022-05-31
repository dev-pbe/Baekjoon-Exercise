#include <stdio.h>
#include <string.h>

int main()
{    
    int n, score, sum;
    char cas[80];

    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        sum = 0;
        score = 1;
        scanf("%s", &cas);
        
        for(int j=0; j<strlen(cas); j++) {
            if(cas[j] == 'O') {
                sum += score;
                score++;
            }
            if(cas[j] == 'X')  score = 1;
        } 
        printf("%d\n", sum);
    }
}