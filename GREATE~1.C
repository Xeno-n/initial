#include <stdio.h>

int main() {
    float num1, num2, num3, greatest;

    // Input: Getting three numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    if (num1 >= num2) {
	if (num1 >= num3) {
	    greatest = num1;  // num1 is the greatest
	} else {
	    greatest = num3;  // num3 is the greatest
	}
    } else {
	if (num2 >= num3) {
	    greatest = num2;  // num2 is the greatest
	} else {
	    greatest = num3;  // num3 is the greatest
	}
    }

    // Output: Display the greatest number
    printf("The greatest of the three numbers is: %.2f\n", greatest);

    getchar;
}
