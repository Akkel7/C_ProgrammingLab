#include <stdio.h>

int main()
{
   float numb1, numb2, sum;
   printf("======CALCULATION OF THE SUM OF TWO NUMBERS=======");
   printf("\n\nENTER TWO NUMBERS: ");
   printf("\nNUMBER 1: ");   
   scanf("%f",&numb1);      //User input number 1
   printf("\nNUMBER 2: ");  
   scanf("%f",&numb2);      // User input number 2

   sum = numb1 + numb2;
   printf("THE SUM OF %f AND %f IS: %f",numb1, numb2, sum); // Output of the sum of number 1 and number 2
    return 0;
}

