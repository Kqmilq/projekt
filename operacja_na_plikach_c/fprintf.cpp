#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Nie można otworzyć pliku output.txt");
        return 1;
    }

    int age = 25;
    float height = 1.75;
    fprintf(file, "Wiek: %d, Wzrost: %.2f\n", age, height);

    fclose(file);
    return 0;
}
