#include <stdio.h>
#include <stdlib.h>
#include "bit.dll"

int main()
{
    char valeur=0b01010101;
    printf("%d\n",test_bit(valeur,2,3));
    return 0;
}
