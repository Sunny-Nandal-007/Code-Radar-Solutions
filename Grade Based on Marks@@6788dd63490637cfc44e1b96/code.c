#include <stdio.h>

int main() {
    int marks;

    if (marks >= 90 && marks <= 100) {
        printf("A\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("B\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("C\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("D\n");
    }
    else if (marks >= 0 && marks < 60) {
        printf("F\n");
    }
    else {
        printf("Invalid marks entered.\n"); // In case of negative marks or more than 100
    }

    return 0;
}
