#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; 
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Optimized: Started at 2 and switched to i++
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}
