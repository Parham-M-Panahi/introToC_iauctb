#include <stdio.h>

int power(int, int);

int main(void)
{
    printf("Please enter a base number : ");
    
    int i;
    scanf("%i", &i);

    printf("Please enter a power(positive integer) : ");

    int p;
    scanf("%i", &p);

    int ans = power(i, p);

    printf("%i to the power of %i is : %i\n", i, p, ans);

    return 0;
}

int power(int base, int power)
{
    int ans = 1;

    for(int i = 0; i < power; i++)
    {
	ans *= base;
    }

    return ans;
}
