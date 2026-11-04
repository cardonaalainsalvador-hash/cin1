#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int debut, fin, pas;
    printf("Entrer la borne de debut :\n");
    scanf("%d", &debut);
    printf("Entrer la borne de fin :\n");
    scanf("%d", &fin);
    printf("entrer le pas :\n");
    scanf("%d", &pas);

    if (debut < fin) 
    {
        while (debut < fin) {
            printf("%d", debut);
            debut = debut + pas;
    }
    }

    else 
    {
        while (debut > fin) {
            printf("%d", fin);
            fin = fin - pas;
        }


    }
         return 0;
}