#include <stdio.h>
#include <stdlib.h>

int main()
{
    float unit_consumed, total_bill;
    printf("ENTER UNITS CONSUMED:");
    scanf("%f",&unit_consumed);
    if(unit_consumed<101){

            total_bill=1.5*unit_consumed;

        printf("TOTAL BILL =%.2f",total_bill);
    }
    else if(unit_consumed>100 || unit_consumed<201){

        total_bill = 2*unit_consumed;

        printf("TOTAL BILL =%.2f",total_bill);
    }

    else if(unit_consumed>200 || unit_consumed<301){

        total_bill = 3*unit_consumed;

        printf("TOTAL BILL =%.2f",total_bill);
    }

    else if(unit_consumed>300){

        total_bill = 5*unit_consumed;

        printf("TOTAL BILL =%.2f",total_bill);
    }
    return 0;
}
