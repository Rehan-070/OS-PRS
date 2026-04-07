#include <stdio.h>
#include <stdlib.h>

int main() {
    int request[50];
    int n, head, i;
    int totalSeek = 0, distance;

    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    printf("Enter request sequence:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &request[i]);
    }

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("\nSeek Sequence: %d", head);

    for (i = 0; i < n; i++) {
        distance = abs(request[i] - head);
        totalSeek += distance;
        head = request[i];

        printf(" -> %d", head);
    }

    printf("\n\nTotal number of seek operations = %d\n", totalSeek);

    return 0;
}