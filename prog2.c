#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv) {
    int n;
    printf("Entrer un nombre entre 1 et 10 : ");
    scanf("%d", &n);
    while (n < 1 || n > 10) {
        printf("Entrer un nombre entre 1 et 10 : ");
        scanf("%d", &n);
    }
    printf("Le nombre est %d ", n);
    return 0;
}
