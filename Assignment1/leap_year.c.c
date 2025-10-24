#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("ENTER THE YEAR: ");
    scanf("%d",&year);
    if(year%400==0 || (year%4==0 && year%100!=0)){

        printf("IT'S A LEAP YEAR");
    }
    else{
        printf("NOT A LEAP YEAR");
    }
    return 0;
}
