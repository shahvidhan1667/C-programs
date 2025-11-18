#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Compare the two strings
    result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are the same.\n");
    } else if (result > 0) {
        printf("\"%s\" is greater than \"%s\".\n", str1, str2);
    } else {
        printf("\"%s\" is smaller than \"%s\".\n", str1, str2);
    }

    return 0;
}
