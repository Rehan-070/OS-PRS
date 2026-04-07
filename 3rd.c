#include <stdio.h>
#include <stdlib.h>

int mutex = 1;   // mutual exclusion
int full = 0;    // filled slots
int empty = 5;   // empty slots
int x = 0;       // item count

void producer() {
    if ((mutex == 1) && (empty != 0)) {
        mutex = 0;
        full++;
        empty--;
        x++;
        printf("Producer produces item %d\n", x);
        mutex = 1;
    } else {
        printf("Buffer is full!\n");
    }
}

void consumer() {
    if ((mutex == 1) && (full != 0)) {
        mutex = 0;
        printf("Consumer consumes item %d\n", x);
        full--;
        empty++;
        x--;
        mutex = 1;
    } else {
        printf("Buffer is empty!\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Producer");
        printf("\n2. Consumer");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                producer();
                break;

            case 2:
                consumer();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}