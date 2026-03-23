#include <stdio.h>

int main() {
    int a, b, c, sum, result;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Addition
    sum = a + b + c;

    // Subtract 1 from the sum
    result = sum - 1;

    // Output result
    printf("Final result after subtracting 1: %d", result);

    return 0;
}
