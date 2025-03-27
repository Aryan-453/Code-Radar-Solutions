#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print factorials in range
void factorialRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        printf("Factorial of %d is %d\n", i, factorial(i));
    }
}

int main() {
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    
    // Checking for invalid input
    if (start > end || start < 0 || end < 0) {
        printf("Invalid input\n");
        return 1;
    }
    
    factorialRange(start, end);
    return 0;
}
