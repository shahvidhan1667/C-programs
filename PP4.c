#include <stdio.h>
#include <string.h>

int main() {
    char *books[3];
    char book1[50], book2[50], book3[50];
    books[0] = book1;
    books[1] = book2;
    books[2] = book3;

    printf("Enter three book names:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%s", books[i]);
    }
    printf("Book names:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", books[i]);
    }
    return 0;
}
