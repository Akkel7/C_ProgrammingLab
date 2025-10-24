#include <stdio.h>
#include <stdlib.h>
/*FINDIND THE LARGEST NUMBER*/

int main()
{
    float numb1, numb2, numb3;
    printf("\nENTER THREE NUMBERS:");
    printf("\nNumber1 : ");
    scanf("%f",&numb1);

    printf("\nNumber2 : ");
    scanf("%f",&numb2);

    printf("\nNumber3 : ");
    scanf("%f",&numb3);

    if(numb1>numb2 && numb1>numb3){
            printf("THE LARGEST NUMBER IS : %f",numb1);
    }
    else if(numb2>numb1 && numb2>numb3){
        printf("THE LARGEST NUMBER IS : %f",numb2);
    }
    else if(numb3>numb1 && numb3>numb2){
        printf("THE LARGEST NUMBER IS : %f",numb3);
    }

    return 0;
}
