#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

int main(void)
{
    char name[MAX_STRING_LENGTH];
    printf("Please Enter Your Name: ");
    scanf("%s", name);

    int size = strlen(name);

    printf("Your name is  %s , and it is  %i  characters long .\n", name, size);

    return 0;
}
