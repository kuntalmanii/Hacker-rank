#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length,int width){
    int area = length*width;
    return area;
}
int main() {
    int l,w;
   scanf("%d %d",&l,&w);
    int res = area(l,w);
    printf("The area is: %d units",res);
    return 0;
}