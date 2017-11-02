#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int x = 3;
    int y = 5;

    printf("x is %i\n",x);
    printf("y is %i\n",y);

    swap(&x,&y);
    printf("Swapping...\n");

    printf("x is %i\n",x);
    printf("y is %i\n",y);

   return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
