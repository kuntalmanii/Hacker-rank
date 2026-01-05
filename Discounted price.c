#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discounted( float price, float percent)
{
    float discountAmount  =  price * percent / 100;

    return discountAmount;
}



int main() {
    float p , per ;
    scanf("%f  %f ",&p , &per);
    float discount = discounted(p,per);
    float finalprice = p - discount;
    

    printf("The final price is: %f\n", finalprice);   
    
    

   
    return 0;
}