#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Output to the console using printf()
    printf("Enter your name: ");

    // Read input from the console using scanf()
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Display the results
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
