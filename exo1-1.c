#include <stdio.h>

int main() {
    int x;

    do {
        printf("Donnez une note sur 20 pour le film 'Gladiator' : ");
        scanf("%d", &x);

        if (x >= 15 && x <= 20) {
            const float y = x * 5;
            printf("Votre note sur 100 est : %.2f \n", y);

            const float z = (float) x / 4;
            printf("Votre note sur 5 est : %.2f \n", z);

            break;
        }
        printf("La note doit etre comprise entre 15 et 20 !\n "
               "respecte un minimum ce chef d'oeuvre ptit con\n"
               "Re");
    } while (1);

    return 0;
}
