#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  printf("ENTER A NATURAL NUMBER: ");
  scanf("%d",&number);
  if(number%5==0 && number%11==0){
    printf("%d IS DIVISIBLE BY BOTH 5 AND  11",number);
  }
  else{
    printf("%d IS NOT DIVISIBLE", number);
  }
    return 0;
}
