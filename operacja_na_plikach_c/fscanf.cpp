#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");

    if (file == NULL) {
        perror("Nie można otworzyć pliku input.txt");
        return 1;
    }

    int age;
    float height;
    fscanf(file, "%d %f", &age, &height);
    printf("Wiek: %d, Wzrost: %.2f\n", age, height);

    fclose(file);
    return 0;
}
