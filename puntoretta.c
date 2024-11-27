#include "puntoretta.h"
#include <stdbool.h>

bool PuntoRetta(float m, float q, float puntoX, float puntoY)
{
    bool scelta;
    if (m*puntoX + q == puntoY)
        scelta = true;
    else
        scelta = false;

    return scelta;
}