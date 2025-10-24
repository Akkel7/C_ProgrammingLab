#include <stdio.h>
#include <stdlib.h>

int main()
{
   float mass, velocity, kinetic_energy;
   printf("ENTER THE VALUE OF THE MASS AND THE VELOCITY : ");

   printf("\nMASS: ");
   scanf("%f",&mass);

   printf("\nVELOCITY: ");
   scanf("%f",&velocity);

   kinetic_energy = 0.5*mass*velocity*velocity;

   printf("THE VALUE OF KINETIC ENERGY IS: %.2f", kinetic_energy);
    return 0;
}
