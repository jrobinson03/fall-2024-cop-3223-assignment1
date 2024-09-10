//********************************************************
// program-1.c
// Author: Janelle Robinson
// Class: COP 3223, Professor Parra
// Purpose: In this assignment, you will write a program that will 
//house many internal functions.
//********************************************************

// Header file for input output functions
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//prepocessor
#define PI 3.14159

//functions
double calculateDistance(); 
double calculatePerimeter(); 
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv)
{

    calculateDistance ();
    calculatePerimeter () ;
    calculateArea ();
    calculateWidth ();
    calculateHeight ();

    return 0;
}

double calculateDistance(){
    //declare
    double x1;
    double y1; 
    double x2; 
    double y2;
    double distance;

    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    //find distance
    distance = (pow((x2 - x1), 2) + pow((y2 - y1), 2));

    //return distance
    return distance;
}

double calculatePerimeter (){
    //declare
    double x1;
    double y1; 
    double x2; 
    double y2;
    double perimeter; 

    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    //presuming the distace is one side of a parallelogram, adding all sides gives the perimeter
    perimeter = calculateDistance() * 4;
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    //difficulty
    return 2.0;
}
double calculateArea (){
    //declare
    double x1;
    double y1; 
    double x2; 
    double y2;
    double area;

    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    //presuming the distace is one side of a parallelogram, calculate the area
    area = calculateDistance() * calculateDistance();

    //difficulty
    return 2.0;
}
double calculateWidth (){
    //declare
    double x1;
    double y1; 
    double x2; 
    double y2;
    double width;

    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    //difficulty    
    return 2.0;
}
double calculateHeight (){
    //declare
    double x1;
    double y1; 
    double x2; 
    double y2;
    double height;

    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    //difficulty
    return 2.0;
}