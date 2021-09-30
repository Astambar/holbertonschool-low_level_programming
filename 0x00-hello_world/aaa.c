#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int recommencerPartie = 1;
while(recommencerPartie == 1)
{
    int coup = 0;
    int nombreMystere = 0, votreNombre = 0;
    const int MAX = 100, MIN = 1;


    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("Choisissez un nombre compris entre 1 et 100 et essayer de trouver le nombre mystere!\n");


  for(coup = 0; votreNombre != nombreMystere; coup++)
    {
        printf("Quel est le nombre? ");
        scanf("%d", &votreNombre);

        if (votreNombre < nombreMystere && MIN < &votreNombre && &votreNombre < MAX)
            printf("Le nombre est plus grand essayez encore!\n");

        else if (votreNombre > nombreMystere && MIN < votreNombre && votreNombre < MAX)
            printf("Le nombre est plus petit.. essayez encore!\n");

        else //if (votreNombre == nombreMystere)
            printf("Vous avez gagne en %d coup!\n", coup);
 //       else
   //         printf("Veuillez entrer un nombre valide!\n");
    }
    printf("Voulez vous une autre partie?\n1 = Oui\n0 = Non\n");
    scanf("%d", &recommencerPartie);
    if (recommencerPartie == 1)
    {
        printf("Et aller encore du boulot pour moi!\n");
    }
}
    printf("Bon bah salut!");
    return 0;
}