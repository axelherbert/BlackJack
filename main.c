#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("+========================+\n");
    printf("+=======Black Jack=======+\n");
    printf("+========================+\n\n");

    char* cartes[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "V", "D", "R", "AS"};
    int cartesValeur[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11,};
    int nbCartes = sizeof(cartes) / sizeof(char*);
    int totalJoueur = 0;
    int totalCroupier = 0;
    int choix = 0;

    //On tire alléatoirement 2 cartes pour le croupier et le joueur

    srand(time(NULL));
    int cartesJoueurs[20];
    cartesJoueurs[0] = rand() % nbCartes;
    cartesJoueurs[1] = rand() % nbCartes;
    int carteCroupier1 = rand() % nbCartes;
    int carteCroupier2 = rand () % nbCartes;

    printf("====Carte Joueur====\n");

    printf("carte Joueur 1: %s\n", cartes[cartesJoueurs[0]]);
    printf("carte Joueur 2: %s\n\n", cartes[cartesJoueurs[1]]);

    totalJoueur = cartesValeur[cartesJoueurs[0]] + cartesValeur[cartesJoueurs[1]];
    printf("Le Joueur a: %d points\n\n", totalJoueur);

    printf("====Carte Croupier====\n");

    printf("Carte Croupier 1: %s\n\n", cartes[carteCroupier1]);
    //printf("Carte Croupier 2: %s\n\n", cartes[carteCroupier2]);

    totalCroupier = cartesValeur[carteCroupier1] + cartesValeur[carteCroupier2];
    //printf("Le Croupier a: %d points\n", totalCroupier);

    while (choix == 0) {
            //Ici on génére une nouvelle carte.
            printf("Voulez vous Tirer une nouvelle cartes ?\n");
            printf("1 - Tirer\n");
            printf("2 - Rester\n");
            scanf("%d", &choix);
            if (choix == 0) {
                printf("Vous avez %d points\n", totalJoueur);
            }
            int carteJoueur3 = rand() % nbCartes;
            totalJoueur = totalJoueur+cartesValeur[cartesJoueurs[2]];
            printf("Carte Joueur 3: %s\n\n", cartes[cartesJoueurs[2]]);
            printf("Vous avez %d points\n", totalJoueur);


            }
    }

    printf("\n\n\n---------------------------------------\n");
    printf("Vous avez: ");

    if (totalJoueur > 21) {
            printf("Vous avez plus de 21 points, vous avez perdu !\n");
    } else {
        if (totalCroupier > 21) {
                printf("Vous avez gagne !!\n");
        } else {
            if (totalJoueur > totalCroupier) {
                printf("Vous avez gagne !!\n");
            } else {
                printf("Vous avez perdu !!\n");
            }
        }
    }

    return 0;
}
