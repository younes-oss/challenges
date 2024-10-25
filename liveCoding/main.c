#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[9];
    char prenom[9];
    int age;

    printf("votre nom:");
    scanf("%s",&nom);

    printf("votre prenom:");
    scanf("%s",&prenom);

    printf("votre age:");
    scanf("%d",&age);

    printf("\"vos informations personnelles\"/n");
    printf("le nom est %s\n",nom);
    printf("le prenom est%s \n",prenom);
    printf("le nom est %d \n",age);





    return 0;
}
