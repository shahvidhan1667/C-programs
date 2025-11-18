#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printVowelFrequency(char str[]) {
    int freq[5] = {0}; // a, e, i, o, u
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char c = tolower(str[i]);
        switch (c) {
            case 'a': freq[0]++; break;
            case 'e': freq[1]++; break;
            case 'i': freq[2]++; break;
            case 'o': freq[3]++; break;
            case 'u': freq[4]++; break;
        }
    }
    printf("Vowel frequencies:\n");
    printf("a: %d\n", freq[0]);
    printf("e: %d\n", freq[1]);
    printf("i: %d\n", freq[2]);
    printf("o: %d\n", freq[3]);
    printf("u: %d\n", freq[4]);
}

int main() {
    char str[] = "Hello World";
    printVowelFrequency(str);
    return 0;
}
