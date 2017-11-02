#include <stdio.h>

int main(void)
{
    int i;

    do
    {
        printf("Please enter an even number: ");
	scanf("%i", &i);
      
    }while(i % 2 != 0);

    printf("thanks for cooperating, You entered : %i\n", i);

    return 0;
}
