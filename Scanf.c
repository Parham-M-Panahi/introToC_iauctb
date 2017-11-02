#include <stdio.h>

int main(void)
{
    int a;
    printf("Please enter a number : ");
    scanf("%i", &a);
    printf("%i to the power of 2 is : %i\n", a, a*a);

    return 0;
}
