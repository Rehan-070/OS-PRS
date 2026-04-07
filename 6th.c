#include <stdio.h>
#include <string.h>

int main() {
    char files[20][30];
    int n, i, j, found;

    printf("Enter number of files: ");
    scanf("%d", &n);

    printf("Enter file names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", files[i]);

        // Check duplicate names
        found = 0;
        for (j = 0; j < i; j++) {
            if (strcmp(files[i], files[j]) == 0) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("File name '%s' already exists! Enter a unique name.\n", files[i]);
            i--; // re-enter same index
        }
    }

    printf("\nSingle Level Directory Contents:\n");
    printf("-------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", files[i]);
    }

    return 0;
}