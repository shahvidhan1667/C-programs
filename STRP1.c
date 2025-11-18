#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

void printNames(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", students[i].name);
    }
}

void printStudentByRoll(struct Student students[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (students[i].roll == roll) {
            printf("Roll: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n",
                   students[i].roll, students[i].name, students[i].course,
                   students[i].major, students[i].minor);
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    struct Student students[10] = {
        {1, "Alice", "B.Tech", "Computer Science", "Mathematics"},
        {2, "Bob", "B.Tech", "Mechanical", "Physics"},
        {3, "Charlie", "B.Tech", "Electrical", "Chemistry"},
        // ... add more students as needed
    };

    printf("All student names:\n");
    printNames(students, 3);

    printf("\nStudent with roll 2:\n");
    printStudentByRoll(students, 3, 2);

    return 0;
}
