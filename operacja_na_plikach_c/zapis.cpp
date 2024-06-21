#include <stdio.h>
#include <stdlib.h>
FILE * fptr;
int main()
{
    char fileLine[100];
    fptr = fopen("output.txt", "w");
    if (fptr == 0)
    {
        printf("Blad otwierania pliku!\n");
        exit(1);
    }
    scanf("%s", fileLine);
    fprintf(fptr, "%s", fileLine);
    fclose(fptr);
    return(0);
}