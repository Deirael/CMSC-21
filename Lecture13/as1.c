#include <stdio.h>

struct point{ //create a struct to contain the points for point 1 and point 2 for the formulas
        float x; //assign x and y values as float
        float y;
    } point1, point2; //name set of variables as point 1 and point 2

int main(){

    printf("Enter x and y for point1: "); //asking user input for their x and y values
    scanf("%f %f", &point1.x, &point1.y); //to be stored as point 1 in the struct

    printf("Enter x and y for point2: "); //asking user input for their x and y values
    scanf("%f %f", &point2.x, &point2.y); //to be stored as point 2 in the struct

    //for slope
    float slope = (point2.y - point1.y) / (point2.x - point1.x); //formula for the slope stored in the variable of the same name
    printf("\nSlope: %2f\n", slope); //result is printed

    //for midpoint
    float midpt1 = (point1.x + point2.x) / 2; //formula for the first value stored in the variable of the same name
    float midpt2 = (point1.y + point2.y) / 2; //formula for the second value stored in the variable of the same name
    printf("\nMidpoint: (%2f, %2f)\n", midpt1, midpt2);  //result is printed

    //for distance
    float distance = sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y));  //formula for the distance stored in the variable of the same name
    printf("\nDistance between two points: %2f\n", distance);  //result is printed

    //for slope intercept form
    float b = (slope * point1.x) - point1.y; //formula for solving the b/y-intercept in the slope intercept form
    printf("\ny = %2fx + (%2f)\n", slope, b);  //slope intercept form is printed using the first point entered by user

}
