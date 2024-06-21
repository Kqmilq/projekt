#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

int main() {
    char fileLine[100];

    fptr = fopen("inandout.txt", "a");
    if (fptr == NULL) {
        printf("Bład otwierania pliku!\n");
        exit(1);
    }

    printf("Wprowadź tekst do dodania do pliku: ");
    scanf("%99s", fileLine);
    fprintf(fptr, "%s\n", fileLine);

    fclose(fptr);

    return 0;
}
