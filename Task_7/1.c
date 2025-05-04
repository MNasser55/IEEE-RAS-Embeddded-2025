#include <stdio.h>
#include <string.h>


typedef struct {
 int roll_number : 4;
 int age : 8;
 unsigned int marks : 3;
char address[50];
char name[50];
} student_info;


void print_students(student_info students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Student %d Info:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %d\n", students[i].marks);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n\n", students[i].address);
    }
}

int main() {
    student_info students[5] = {
        {1, 18, 5, "Cairo", "Ahmed"},
        {2, 19, 6, "Giza", "Salma"},
        {3, 18, 4, "Alexandria", "Khaled"},
        {4, 20, 7, "New Cairo", "yousef"},
        {5, 21, 3, "Tanta", "Mona"}
    };

    print_students(students, 5);

    printf("Total size of student_info struct: %d bytes\n", sizeof(student_info));

    return 0;
}
