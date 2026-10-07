#include <stdio.h>

int main() {
    int i, n;
    char students[100][50];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the names of students:\n");
    for (i = 0; i < n; i++) {
        scanf("%49s", students[i]);
    }
    printf("\nFirst %d students are:\n", n);
    for (i = 0; i < n; i++) {
        printf("%s\n", students[i]);
    }
    return 0;
}