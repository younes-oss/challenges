#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mile,metre;
    printf("demande la distance en Metre :");
    scanf("%f",&metre);
    mile = metre / 1609;
    printf("La valeur de la distance en mile:%f",mile);


    return 0;
}
