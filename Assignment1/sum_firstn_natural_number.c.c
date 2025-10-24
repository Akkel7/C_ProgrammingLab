#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum;
    printf("ENTER A NATURAL NUMBER: ");
    scanf("%d",&n);

    sum=n*(n+1)/2;

    printf("THE SUM OF FIRST %d NATURAL NUMBERS IS EQUAL TO: %d", n, sum );
    return 0;
}
