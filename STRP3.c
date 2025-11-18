#include <stdio.h>

struct StudentData {
    int rollNo;
    char name[50];
    int physics, maths, chemistry;
    int total;
};

int main() {
    struct StudentData student;
    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter marks in Physics, Maths, Chemistry: ");
    scanf("%d %d %d", &student.physics, &student.maths, &student.chemistry);
    student.total = student.physics + student.maths + student.chemistry;

    printf("Roll No: %d\nName: %s\nPhysics: %d\nMaths: %d\nChemistry: %d\nTotal: %d\n",
           student.rollNo, student.name, student.physics, student.maths, student.chemistry, student.total);
    return 0;
}
