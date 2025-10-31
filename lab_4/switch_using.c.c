#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numb1, numb2,add, subs, mul, div;
    int cas;
    printf("\nEnter two numbers: ");
    printf("\nNUMBER 1: ");
    scanf("%f",&numb1);
    printf("\nNUMBER 2: ");
    scanf("%f",&numb2);

    printf("\n\n========================================================");

    printf("\n1.ADDITION");
    printf("\n2.SUBSTRACTION");
    printf("\n3.MULTIPLICATION");
    printf("\n4.DIVISION");

    printf("\n\n=======================================================");
    printf("\n\nCHOICE : ");
    scanf("%d",&cas);

    switch(cas)
    {
    case 1:

        add=numb1+numb2;
        printf("%.2f + %.2f = %.2f",numb1,numb2,add);
        break;

     case 2:

        subs=numb1-numb2;
        printf("%.2f - %.2f = %.2f",numb1,numb2,subs);
        break;

    case 3:

        mul=numb1*numb2;
        printf("%.2f * %.2f = %.2f",numb1,numb2, mul);
        break;

    case 4:

        div=numb1/numb2;
        printf("%.2f / %.2f = %.2f",numb1,numb2,div);

    default:
        printf("\nERROR");

    }
    return 0;
}
