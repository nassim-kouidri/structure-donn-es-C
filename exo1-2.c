#include <stdio.h>



int main() {
    const int filmNumber = 5;
    int notes[filmNumber];
    float somme = 0;

    for (int i = 0; i < filmNumber; ++i) {
        printf("Votre note au film %d : ", i + 1);
        scanf("%d", &notes[i]);
    }

    for (int i = 0; i < filmNumber; ++i) {
        somme += notes[i];
    }

    const float moyenne = somme / filmNumber;

    printf("Moyenne : %.1f", moyenne);

    return 0;
}
