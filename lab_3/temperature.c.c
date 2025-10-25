#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("ENTER A TEMPERATURE IN Celsuis: ");
    scanf("%f",&temp);
    if(temp>60 && temp<=80){
        printf("SAFE");
    }
    else{
        printf("Warning");
    }

    return 0;
}
