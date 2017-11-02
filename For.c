#include <stdio.h>

int main(void)
{
    printf("Print numbers in range [0, 10) :\n");
   
    for(int i = 0; i < 10; i++)
    {
        printf("%i\t", i);
    }


    printf("\n\n");


    printf("Print even numbers in range [0, 10) :\n");
    
    for(int j = 0; j < 10; j++)
    {
        if(j % 2 == 0)
        {
            printf("%i\t", j);
        }
    }

    printf("\n\n");

    return 0;
}
