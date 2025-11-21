#include <stdio.h>
#include <stdlib.h>



int main()
{
	float mass, acceleration, force;
	printf("======FORCE CALCULATION=======")
	printf("\nENTER THE MASS IN Kgs: ");
	scanf("%f",&mass);		
	printf("ENTER THE ACCELERATION VALUE IN m/s^2: ");
	scanf("%f",&acceleration);
	force=mass*acceleration;
	printf("THE FORCE VALUE in N IS:  %f",force);
	return 0;
}

