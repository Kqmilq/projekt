#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        perror("Nie można otworzyć pliku output.txt");
        return 1;
    }

    fputc('A', file);

    fclose(file);
    return 0;
}
