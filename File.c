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
    
    FILE *file = fopen("students.csv", "w");
    if(file == NULL)
    {
	fprintf(stderr, "Could not open file.\n");
	fclose(file);
	return 1;
    }

    for(int i = 0; i < 3; i++)
    {
        fprintf(file, "%s, %i\n", class[i].name, class[i].age);
    }

    fclose(file);
	
    return 0;
}
