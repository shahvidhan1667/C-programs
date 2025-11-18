#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float avgRuns;
};

void sortCricketers(struct Cricketer cricketers[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cricketers[j].avgRuns > cricketers[j + 1].avgRuns) {
                struct Cricketer temp = cricketers[j];
                cricketers[j] = cricketers[j + 1];
                cricketers[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Cricketer cricketers[10] = {
        {"Sachin", 48, 200, 50.0},
        {"Virat", 35, 100, 55.0},
        {"Rohit", 36, 120, 48.0}
    };
    int n = 3;

    sortCricketers(cricketers, n);

    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Matches: %d, Avg Runs: %.2f\n",
               cricketers[i].name, cricketers[i].age, cricketers[i].matches, cricketers[i].avgRuns);
    }
    return 0;
}
