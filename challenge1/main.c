#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[8];
    char prenom[9];
    int Age;
    char sex[9];
    char numTel[8];


    printf("votre nom:");
    scanf("%s",&nom);
    printf("votre prenom:");
    scanf("%s",&prenom);
    printf("votre Age:");
    scanf("%d",&Age);
    printf("votre sex:");
    scanf("%s",&sex);
    printf("votre numero de tele:");
    scanf("%s",&numTel);
    printf(" \n ");
    printf("\n  ################################\n");
    printf("\"  vos informations personnelles\"\n");
    printf("le prenom est:%s\n",prenom);
    printf("le nom est:%s\n ",nom);
    printf("l'age:%d\n ",Age);
    printf("le sex est:%s\n ",sex);
    printf("le numTel est:%s\n ",numTel);






    return 0;
}
