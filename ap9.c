#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE];
    int freq[SIZE];
    int i, j, count;

    printf("Enter 10 elements of the array:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequencies to -1
    }

    for (i = 0; i < SIZE; i++) {
        count = 1;
        for (j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Don't count frequency for duplicate
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }

    printf("\nFrequency of each element:\n");
    for (i = 0; i < SIZE; i++) {
        if (freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }

    return 0;
}
