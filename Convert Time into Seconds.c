#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int convertToSeconds(int h, int m, int s){
    int convertToSeconds = (h * 3600) + (m * 60) + s;
    return convertToSeconds;
}
int main() {

    int hours,min,sec;
    int totalsec;
    scanf("%d %d %d", &hours , &min , &sec);
    totalsec = convertToSeconds(hours, min, sec);

    printf("Total seconds: %d", totalsec);
    
    
    return 0;
}
