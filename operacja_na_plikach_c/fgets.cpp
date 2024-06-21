#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    char line[256];

    if (file == NULL) {
        printf("Nie można otworzyć pliku input.txt");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
