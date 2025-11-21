#include <stdio.h>
#include <stdlib.h>

int main()
{

float a, b;
	printf("ENTER THE TENSILE STRENGH OF MATERIAL 1: ");
	scanf("%f",&a);

	printf("ENTER THE TENSILE STRENGH OF MATERIAL 2: ");
	scanf("%f",&b);
	if(a>b){
		printf("THE MATERIAL 1 HAS THE GREATEST TENSILE STRENGH");

	}
	else if (a<b){
	printf("THE MATERIAL 2 HAS THE GREATEST TENSILE STRENGH");
	}
	else{
		printf("THEY HAVE SAME STRENGH");
	}

    return 0;
}
