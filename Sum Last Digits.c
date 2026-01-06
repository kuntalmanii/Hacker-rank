#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b;
    scanf("%d %d ", &a , &b);
    int lastA= a % 10;
    int lastB= b %  10;
    printf("The sum of last digits is: %d ",lastA + lastB);
    return 0;
}
