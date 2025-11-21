#include <stdio.h>

int main()
{
   float numb1, numb2, sum;
   printf("ENTER TWO NUMBERS: ");
   printf("\nNUMBER 1: ");
   scanf("%f",&numb1);
   printf("\nNUMBER 2: ");
   scanf("%f",&numb2);

   sum = numb1 + numb2;
   printf("THE SUM OF %f AND %f IS: %f",numb1, numb2, sum);
    return 0;
}
