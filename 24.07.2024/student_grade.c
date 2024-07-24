#include <stdio.h>

#define MAX 100

int main() {
    int numStudents;
    float grades[MAX], sum = 0.0, average;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
        sum += grades[i];
    }

    average = sum / numStudents;

    printf("Average grade: %.2f\n", average);

    return 0;
}
