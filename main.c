#include <stdio.h>
#include <stdbool.h>
#include "puntoretta.h"

int main(void)
{
    float m, q = 0;
    float puntoX, puntoY = 0;

    printf("Inserisci m\n");
    scanf("%f", &m);
    printf("Inserisci q\n");
    scanf("%f", &q);
    printf("Inserisci il punto X\n");
    scanf("%f", &puntoX);
    printf("Inserisci il punto Y\n");
    scanf("%f", &puntoY);

    if (PuntoRetta(m, q, puntoX, puntoY) == true)
        printf("Il punto fa parte della retta\n");
    else
        printf("Il punto non fa parte della retta\n");

    return 0;
}
