#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Nie można otworzyć pliku output.txt");
        return 1;
    }

    fputs("To jest linia tekstu.\n", file);

    fclose(file);
    return 0;
}
