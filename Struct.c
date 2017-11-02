#include <stdio.h>

#define MAX_STRING_LENGTH 100

typedef struct {
    char name[MAX_STRING_LENGTH];
    char class[MAX_STRING_LENGTH];
} student;

int main(void)
{
    student x;

    printf("Please Enter Your Name : ");
    scanf("%s", x.name);

    printf("Please Enter Your class : ");
    scanf("%s", x.class);

    printf("\n");
    printf("student : %s , is in class : %s\n\n", x.name, x.class);

    return 0;
}
