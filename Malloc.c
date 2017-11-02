#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

int main(void)
{
    char *name = malloc(sizeof(char)*(MAX_STRING_LENGTH + 1));

    printf("Please Enter Your Name : ");
    scanf("%s", name);

    printf("Your Name is : %s \n\n", name);

    free(name);
    return 0;
}
