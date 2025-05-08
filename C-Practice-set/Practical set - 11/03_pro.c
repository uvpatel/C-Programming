#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[50];
    float marks;

    // Open for writing
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File opened successfully for writing.\n");

    // Input section
    printf("Enter your name: ");
    scanf(" %[^\n]", name);  // Accepts full name with spaces

    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Writing to file
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Marks: %.2f\n", marks);  // Format marks to 2 decimal places

    fclose(fp);
    printf("File closed after writing.\n\n\n");

    // Open for reading
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File opened successfully for reading.\n");

    // Read and display contents
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    printf("File closed after reading.\n");

    return 0;
}
