#include <stdio.h>
#include <stdbool.h>

// Function to add two numbers and return the sum
int add(int a, int b) {
    int sum = a + b;  // Adds the two parameters
    return sum;       // Returns the result
}

// Function returning a float
float divide(float x, float y) {
    return x / y;  // Returns the result of division as a float
}

// Function returning a character
char getFirstChar(char* str) {
    return str[0];  // Returns the first character of the string
}

// Function returning a boolean
bool isEven(int number) {
    return number % 2 == 0;  // Returns true if the number is even, false otherwise
}

// Function returning nothing (void)
void printMessage() {
    printf("Hello, World!\n");  // Prints a message to the console
}

// Main function
int main() {
    // Call functions
    int sum = add(5, 3);                           // Calls add function and stores the result
    float quotient = divide(10.0, 2.0);            // Calls divide function and stores the result
    char firstChar = getFirstChar("long string");  // Calls getFirstChar function and stores the result
    bool evenCheck = isEven(4);                    // Calls isEven function and stores the result

    // Print results
    printf("Sum: %d\n", sum);                      // Print sum
    printf("Quotient: %.2f\n", quotient);          // Print quotient
    printf("First Character: %c\n", firstChar);    // Print first character
    printf("Is Even: %s\n", evenCheck ? "true" : "false");  // Print whether the number is even

    // Call void function
    printMessage();  // Prints "Hello, World!"

    return 0;
}
