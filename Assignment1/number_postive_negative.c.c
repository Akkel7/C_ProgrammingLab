#include <stdio.h>
#include <stdlib.h>
/*SIGN OF A NUMBER*/
int main()
{
   float number;
   printf("ENTER A NUMBER: ");
   scanf("%f",&number);

   if(number<0){
    printf("the number is NEGATIVE");
   }

   else if(number>0){
    printf("the number is POSITIVE");
   }

   else if(number==0){
    printf("the number is ZERO");
   }
    return 0;
}
