#include <stdio.h>
#include <string.h>

void abbreviateNames(char names[][50], int n) {
    for (int i = 0; i < n; i++) {
        char *token = strtok(names[i], " ");
        while (token != NULL) {
            char *next = strtok(NULL, " ");
            if (next == NULL) {
                printf("%s ", token);
            } else {
                printf("%c. ", token[0]);
            }
            token = next;
        }
        printf("\n");
    }
}

int main() {
    char names[3][50] = {"John Michael Smith", "Alice Jane Brown", "Robert Thomas Wilson"};
    abbreviateNames(names, 3);
    return 0;
}
