#include <stdio.h>
#include <stdlib.h>

int main()
{
    float applied_stress, yield_strengh, fos;

    printf("======CALCULATE FACTOR OF SAFETY========");
    printf("\n\nENTER THE VALUE OF APPLIED STRESS(MPA): ");
    scanf("%f",&applied_stress);

    printf("\nENTER THE VALUE OF MATERIAL YIELD STRENGH(MPA): ");
    scanf("%f",&yield_strengh);

    fos = yield_strengh/applied_stress;
    printf("\nFACTOR OF SAFETY VALUE IS: %.2f",fos);

    if(fos>=2)
    {
        printf("\n\nSAFE DESIGN");
    }

    else if(fos>=1.5 && fos<2)
    {
        printf("\n\nACCEPTABLE WITH MONITORING");
    }

    else if(fos<1.5)
    {
        printf("\n\nDANGER - REDESIGN NEEDED");
    }

    return 0;
}
