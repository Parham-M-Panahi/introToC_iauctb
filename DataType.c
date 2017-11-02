#include <stdio.h>

int main(void)
{
    int a = 5;
    char b = 's';
    float c = 4.5617;
    double d = 187.11543;

    printf("a = %i \n", a);
    printf("b = %c \n", b);
    printf("c = %f \n", c);
    printf("d = %f \n", d);
    printf("\n");

    printf("size of int is: %i bytes\n", (int)sizeof(int));
    printf("size of char is: %i bytes\n", (int)sizeof(char));
    printf("size of float is: %i bytes\n", (int)sizeof(float));
    printf("size of double is: %i bytes\n", (int)sizeof(double));
	
    return 0;
}
