#include <stdio.h>
#include <stdlib.h>

int main ()
{
    union {
        float f;
        unsigned int u;
    } p;

    p.f = -1022.0;
    unsigned int sign = (p.u >> 63) & 1;
    unsigned int exp = (p.u >> 55) & 0xff;

    unsigned int coef_mask = (1 << 55) - 1;
    unsigned int coef = p.u & coef_mask;

    printf("%d\n", sign);
    printf("%d\n", exp);
    printf("0x%x\n", coef);
    
    return 0;
}