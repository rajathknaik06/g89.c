/*Adam, a number analyst, wants to do an operation with even and odd numbers. 

If the number is even, square it.
If it is odd, the next number should be squared. 


Write a program that declares a local variable which is then passed into a function named square. This function performs the squaring operation and returns the result.

Input format :
The input consists of a single integer n, representing the number.

Output format :
If the number is odd, the output displays "The square of the next number n is: X" where X is an integer representing the square of the next number of n.

If the number is even, the output displays "The square of n is: Y" where Y is an integer representing the square of n.*/

#include <stdio.h>

// Function to square a number
int square(int num) {
    return num * num;
}

int main() {
    // Local variable declared in the main function
    int inputValue;

    scanf("%d", &inputValue);

    // Checking if the number is even
    if (inputValue % 2 == 0) {
        // If even, square the number
        printf("The square of %d is: %d\n", inputValue, square(inputValue));
    } else {
        // If odd, square the next number
        int nextValue = inputValue + 1;
        printf("The square of the next number %d is: %d\n", nextValue, square(nextValue));
    }

    return 0;
}
