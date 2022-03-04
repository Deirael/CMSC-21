#include <stdio.h>

int main(void) // calling the function main as an integer
{
    int  num1, denom1, num2, denom2, result_num, result_denom; // specifying all variables as integers

    printf("Enter first fraction: "}; // asking user input for a fraction
    scanf("%d/%d", &num1, &denom1}; // scanning the input, and assigning the values of the numerator 1 and denominator 1

    printf("Enter second fraction: "}; // asking user input for another fraction
    scanf("%d/%d", &num2, &denom2}; // scanning the input, and assigning the values of the numerator 2 and denominator 2

    result_num = num1 * denom2 + num2 * denom1; // assigning the formula of finding the sum of the numerators of the fractions into a variable

    result_denom = denom1 * denom2; // assigning the formula of finding the common denominator of the fractions into a variable
    printf("The sum is %d/%d\n", result_num, result_denom); // prints and displays the sum of the two fractions

    return 0; //executes program
}
