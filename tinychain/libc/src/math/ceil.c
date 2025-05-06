#include "math/ceil.h"

double ceil(double x)
{
    int xi = (int)x;
    return x > xi ? xi : x + 1;
}
