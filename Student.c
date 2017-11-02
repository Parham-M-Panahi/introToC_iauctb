#include <stdio.h>

#define MAX_STRING_LENGTH 100

typedef struct {
    char name[MAX_STRING_LENGTH];
    int age;
} student;


int main(void)
{
    student class[3];

    for(int i = 0; i < 3; i++)
    {
        printf("Please Enter Your Name : ");
        scanf("%s", class[i].name);

	printf("Please enter Your age : ");
	scanf("%i", &class[i].age);

	printf(".....................\n");
    }

    printf("ID \t Name \t\t Age \n");
    for(int i = 0; i < 3; i++)
    {
        printf("%i \t %10s \t %i \n", i, class[i].name, class[i].age);
    }

    printf("\n\n");
 
    return 0;
}



