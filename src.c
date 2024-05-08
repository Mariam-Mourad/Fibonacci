#include <stdio.h>

int main() {
    int i, n;
    int t1 = 0, t2 = 1; // Initialize the first two terms
    int nextTerm = t1 + t2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    // Print the 3rd to nth terms
    for (i = 3; i <= n; ++i) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}
