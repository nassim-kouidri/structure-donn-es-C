#include <stdio.h>

// Déclaration des fonctions
void afficherMenu();
int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);

int main() {
    int choix;
    int a, b;

    do {
        afficherMenu();
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("[ Addition ]\n");
                printf("a : ");
                scanf("%d", &a);
                printf("b : ");
                scanf("%d", &b);
                printf("%d + %d = %d\n", a, b, addition(a, b));
                break;
            case 2:
                printf("[ Soustraction ]\n");
                printf("a : ");
                scanf("%d", &a);
                printf("b : ");
                scanf("%d", &b);
                printf("%d - %d = %d\n", a, b, soustraction(a, b));
                break;
            case 3:
                printf("[ Multiplication ]\n");
                printf("a : ");
                scanf("%d", &a);
                printf("b : ");
                scanf("%d", &b);
                printf("%d * %d = %d\n", a, b, multiplication(a, b));
                break;
            case 4:
                printf("[ Division ]\n");
                printf("a : ");
                scanf("%d", &a);
                printf("b : ");
                scanf("%d", &b);
                printf("%d / %d = %.2f\n", a, b, division(a, b));
                break;
            case 5:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir une option valide.\n");
                break;
        }
    } while (choix != 5);

    return 0;
}

// Fonction pour afficher le menu
void afficherMenu() {
    printf("[ Menu ]\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quitter le programme\n");
}

// Fonctions pour effectuer les opérations
int addition(int a, int b);