#include "math/floor.h"

double floor(double x)
{
    int xi = (int)x;
    return x < xi ? xi - 1 : xi;
}
