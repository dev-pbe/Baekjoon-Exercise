#include <stdio.h>
int main() {
    int A, B;
    int x, y, z, res;
    scanf("%d", &A);
    scanf("%d", &B);
    x = A * ((B%100)%10);
    y = A * ((B%100)/10);
    z = A * (B/100);
    res = A * B;
    printf("%d\n%d\n%d\n%d", x, y, z, res);
}