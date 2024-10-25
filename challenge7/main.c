#include <stdio.h>
#include <stdlib.h>



int main() {
    int a, b;


    printf("Entrez le premier entier a: ");
    scanf("%d", &a);
    printf("Entrez le deuxième entier b: ");
    scanf("%d", &b);


    if (b == 0) {
        printf("Erreur : Division par zéro est indéfinie\n");
        return 1;
    }


    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    int quotient = a / b;
    int reste = a % b;


    printf("\n###################################\n");
    printf("Résultats des opérations :\n");
    printf("a + b = %d\n", somme);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", produit);
    printf("a / b = %d (quotient)\n", quotient);
    printf("a %% b = %d (reste)\n", reste);


    return 0;
}
