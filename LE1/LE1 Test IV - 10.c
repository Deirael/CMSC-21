#include <stdio.h>
#include <math.h>

int main(void){

    double tol, x, y, yn;  //declaring variables as doubles

    tol = 0.00001;   //assigning the tolerance value to the same variable name

    printf("Enter a number: "); //asking input from the user
    scanf("%lf", &x); //scanning and storing the user input into variable x

    y = 1;        //assigning the initial guess 1 into y
    yn = 0.5*(y+(x/y));  //assigning formula for the next guess into variable yn

    while(fabs(yn - y) > tol ){ //iteration that will repeat until the next guess is less than or equal to the tolerance value
        y = yn;       //updating the value of y to the yn + 1 value (next guess that will the previous guess for the next one)
        yn = 0.5*(y+(x/y));  //solving the next guess
    }

    printf(" The square root of %.2lf is approximately %lf",x,y);   //printing and displaying the output

    return 0;

}
