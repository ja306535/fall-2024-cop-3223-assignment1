//********************************************************
// program-fracturing.c
// Author: Jalil Fountain
// UCFID: 5390348
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program will prompt the user to enter the values:X1,Y1,X2,Y2 and display the distance,perimeter,area,width, and height.
// Input: X1,Y1,X2,Y2
//
// Output: (to the command line) displays the distance,perimeter,area,width, and height.
// //********************************************************
#include <stdio.h> 
#include <math.h>

#define PI 3.14159 //preprocessor directive

static double x1, w1, x2, w2; //local static variables (the instructions state "No GLOBAL variables" but after doing research ive found that static variables are not global variables )
//********************************************************** */
// void getValues
//
// Purpose:To get user input
// Output: display prompt
//*********************************************************** */
void getValues() {

    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &w1);

    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &w2);
}
//********************************************************** */
// void printValues
//
// Purpose:To print the inputed values
// Output:display inputed values
//*********************************************************** */
void printValues() {

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, w1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, w2);
}
//********************************************************** */
// calculateDistance
//
// Purpose:Calculates distance between the values entered by the user
// Output: the distance 
//*********************************************************** */
double calculateDistance() {
    printValues();
    double distance = sqrt(pow(x2 - x1, 2) + pow(w2 - w1, 2));
    return distance;
}
//********************************************************** */
// calculatePerimeter
//
// Purpose:Calculates the perimiter of the user values
// Output: the perimeter
//*********************************************************** */
double calculatePerimeter() {
    double radius = calculateDistance();  // Reuse the distance calculation function
    double perimeter = 2 * PI * radius;   // Calculate the circumference
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    printf("Function difficulty: 2.0\n");
    return perimeter; 
}
//********************************************************** */
// calculateArea
//
// Purpose:Calculates the area of the user values
// Output:the area
//*********************************************************** */
double calculateArea() {
    printValues();
    double width = fabs(x2 - x1);    // Calculate the width
    double height = fabs(w2 - w1);   // Calculate the height
    double area = width * height;    // Calculate the area
    printf("The area of the city encompassed by your request is %.2f\n", area);
    printf("Function difficulty: 2.0\n");
    return area;
}
//********************************************************** */
// calculateWidth
//
// Purpose:Calculates the width of the user values
// Output:the Width
//*********************************************************** */
double calculateWidth() {
    printValues();
    double width = fabs(x2 - x1);    // Calculate the width
    printf("The width of the city encompassed by your request is %.2f\n", width);
    printf("Function difficulty: 2.0\n");
    return width;
}
//********************************************************** */
// calculateHeight
//
// Purpose:Calculates the height of the user input
// Output:the height
//*********************************************************** */
double calculateHeight() {
    printValues();
    double height = fabs(w2 - w1);   // Calculate the height
    printf("The height of the city encompassed by your request is %.2f\n", height);
    printf("Function difficulty: 2.0\n");
    return height;
}
// main
int main(int argc, char **argv) {
    getValues(); //gets user value

    double distance = calculateDistance(); //calculates distance
    printf("The distance between the two points is %.2f\n", distance);
   
    calculatePerimeter(); //Calculates and prints perimeter
    calculateArea(); //Calculates and prints area
    calculateWidth(); //Calculates and prints width
    calculateHeight(); //Calculates and prints height

    return 0;
}

