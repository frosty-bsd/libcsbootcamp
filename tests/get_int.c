#include <stdio.h>
#include "csbootcamp.h"

int main(void)
{
    int i = get_int();
    printf("%i\n", i);
    int j = get_int("Foo: ");
    printf("%i\n", j);
}
