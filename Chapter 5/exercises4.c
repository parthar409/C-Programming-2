#include <stdio.h>

int main() {
    int marks[100];
    int n, i;
    int c1=0, c2=0, c3=0, c4=0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] > 80) {
            c1++;
        }
        else if (marks[i] > 60) {
            c2++;
        }
        else if (marks[i] > 40) {
            c3++;
        }
        else {
            c4++;
        }
    }

    printf("Number of students than 80 marks: %d\n", c1);
    printf("Number of students than 60 marks: %d\n", c2);
    printf("Number of students than 40 marks: %d\n", c3);
    printf("Number of students 40 or less marks: %d\n", c4);

    return 0;
}
