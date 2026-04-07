#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char data[100];

    // Creating and opening file in write mode
    fp = fopen("experiment1.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing data to file
    fprintf(fp, "This is Experiment 1 - File Handling Operations.\n");
    fprintf(fp, "Operating Systems Lab.\n");

    // Closing file after writing
    fclose(fp);

    printf("Data written successfully.\n");

    // Opening file in read mode
    fp = fopen("experiment1.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading data from file:\n");

    // Reading file content
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    // Closing file
    fclose(fp);

    return 0;
}