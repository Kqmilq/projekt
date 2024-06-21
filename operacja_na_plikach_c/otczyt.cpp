#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
    char fileLine[100];
    fptr = fopen("input.txt", "r");
    if (fptr == NULL)
    {
        printf("Blad otwierania pliku!\n");
        exit(1);
    }
    fgets(fileLine, 100, fptr);
    puts(fileLine);
    fclose(fptr);
    return(0);
}