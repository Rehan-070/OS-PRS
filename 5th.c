#include <stdio.h>

int main() {
    int totalBlocks, startBlock, fileSize, i;

    printf("Enter total number of disk blocks: ");
    scanf("%d", &totalBlocks);

    printf("Enter starting block number: ");
    scanf("%d", &startBlock);

    printf("Enter file size (number of blocks required): ");
    scanf("%d", &fileSize);

    // Check if allocation is possible
    if (startBlock + fileSize - 1 < totalBlocks) {
        printf("\nFile allocated successfully.\n");
        printf("Allocated blocks are:\n");

        for (i = startBlock; i < startBlock + fileSize; i++) {
            printf("%d ", i);
        }

        printf("\nStarting block: %d", startBlock);
        printf("\nLength of file: %d blocks\n", fileSize);
    } else {
        printf("\nAllocation failed! Not enough contiguous blocks.\n");
    }

    return 0;
}