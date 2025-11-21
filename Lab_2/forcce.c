#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mass, acceleration, force;
	printf("ENTER THE MASS IN Kgs: ");
	scanf("%f",&mass);
	printf("ENTER THE ACCELERATION VALUE IN m/s^2: ");
	scanf("%f",&acceleration);
	force=mass*acceleration;
	printf("THE FORCE VALUE in N IS:  %f",force);
	return 0;
}
