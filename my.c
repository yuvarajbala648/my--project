#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Output the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}
