#include <stdio.h>
void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;
    fptr = fopen("work.txt", "w");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fptr, "Name    = %s\n", name);
    fclose(fptr);
}