#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vibration_amplititude, freq;
    printf("=======VIBRATION ANALYSIS========");
    printf("\n\nENTER THE VIBRATION AMPLITUDE VALUE (mm): ");
    scanf("%f",&vibration_amplititude);

    printf("\nENTER THE FRENQUENCE VALUE(Hz): ");
    scanf("%f",&freq);

    if(vibration_amplititude>0.5 && (freq>=20 && freq<=50) )
    {
       printf("HIGH RISk");
    }


    else if(vibration_amplititude>0.5 || freq>60)
    {
        printf("MEDIUM RISK");
    }

    else
    {
        printf("LOW RISK");
    }
    return 0;
}
