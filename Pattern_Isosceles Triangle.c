#include <stdio.h>

int main() 
{
    int n, i, j, space;

    scanf("%d", &n);

    if(n <= 1) 
    {
        printf("Shape Not Possible");
        return 0;
    }

    for(i = 1; i <= n; i++) {
        
        for(space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
       
        for(j = 1; j <= (2 * i - 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}