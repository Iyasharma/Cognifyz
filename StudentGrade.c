#include <stdio.h>

int main() {
    int numSubjects;
    float grade, total = 0.0, average;

    // Ask for number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    // Check for valid number of subjects
    if (numSubjects <= 0) {
        printf("Invalid number of subjects.\n");
        return 1;
    }

    // Get grades for each subject
    for (int i = 1; i <= numSubjects; i++) {
        printf("Enter grade for subject %d: ", i);
        scanf("%f", &grade);

        // Optional: validate grade range
        if (grade < 0 || grade > 100) {
            printf("Invalid grade. Must be between 0 and 100.\n");
            i--; // repeat this subject
            continue;
        }

        total += grade;
    }

    // Calculate average
    average = total / numSubjects;

    // Display result
    printf("Average grade: %.2f\n", average);

    return 0;
}
