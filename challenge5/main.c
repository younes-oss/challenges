#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    float c;

    printf("Donner la valeur de la température en Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;


    printf("La valeur de la température en Celsius: %.2f\n", c);


    if (c <= 0) {
        printf("Sensation ressentie: Très froid\n");
    } else if (c > 0 && c <= 15) {
        printf("Sensation ressentie: Froid\n");
    } else if (c > 15 && c <= 30) {
        printf("Sensation ressentie: Chaud\n");
    } else {
        printf("Sensation ressentie: Très chaud\n");
    }
    return 0;
}
