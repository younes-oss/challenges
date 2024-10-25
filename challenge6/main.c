#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c;
    float f;

    printf("Donner la valeur de la temperature en Fahrenheit:");
    scanf("%f",&f);
    c = (f - 32) / 1.8;
    printf("La valeur de la temperature en Celsius:%.2f",c);
    return 0;
}
