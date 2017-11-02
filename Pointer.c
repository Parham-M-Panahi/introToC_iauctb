#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 14;

    printf("value of -- a -- is %i \n", a);
    printf("address of -- a -- is %p \n\n", &a);

    int *x = &a;
    
    printf("value of -- x -- is %p \n", x);
    printf("what is at that address %i \n\n", *x);

    return 0;
}
