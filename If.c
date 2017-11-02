#include <stdio.h>

int main(void)
{
    printf("Please enter a number : ");

    int a;
    scanf("%i", &a);

    if(a >= 10 && a <= 100)
    {
        printf("You entered a number greater than 10 and less that 100.\n");
    }else if(a < 10)
    {
        printf("You entered a number less that 10.\n");
    }else
    {
        printf("You entered a number greater that 100.\n");
    }

    return 0;
}
