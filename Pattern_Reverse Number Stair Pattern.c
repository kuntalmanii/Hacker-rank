#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
        int N, i, j;

    scanf("%d", &N);


    for(i = N; i >= 1; i--) {
        for(j = i; j >= 1; j--) {
            printf("%d", j);
            if(j > 1) printf(" "); 
        }
        printf("\n");
    }
    return 0;
}
