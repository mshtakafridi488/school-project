#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LEN 20
#define MAX_CLASS_SIZE 15

typedef struct {
    char name[MAX_NAME_LEN];
    int roll;
} Student;

void print_class(Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        printf("%s\n", students[i].name);
    }
}

void input_class(Student students[]) {
    char name[MAX_NAME_LEN];
    int roll;
    for (int i = 0; i < MAX_CLASS_SIZE; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", name);
        students[i].name = strdup(name);
        printf("Enter student %d roll: ", i + 1);
        scanf("%d", &roll);
        students[i].roll = roll;
    }
}

int main() {
    Student students[MAX_CLASS_SIZE];
    input_class(students);
    print_class(students, MAX_CLASS_SIZE);
    return 0;
}
