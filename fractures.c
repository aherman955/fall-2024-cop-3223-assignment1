#include <stdio.h>  // for printf and scanf
#include <math.h>   // for sqrt and pow
#define PI 3.14159

// Function to ask for user input
double askForUserInput(const char *coordinate) {
    double value;
    printf("Enter the value for %s: ", coordinate);
    scanf("%lf", &value);
    return value;
}

// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is: %.2f\n", distance);
    return distance;
}

// Function to calculate the perimeter of a circle using the distance as the diameter
double calculatePerimeter(double distance) {
    double perimeter = PI * distance;
    printf("The perimeter of the circle is: %.2f\n", perimeter);
    return perimeter;
}

// Function to calculate the area of a circle using the distance as the diameter
double calculateArea(double distance) {
    double radius = distance / 2;
    double area = PI * pow (radius, 2);
    printf("The area of the circle is: %.2f\n", area);
    return area;
}

// Function to calculate the width between two points
double calculateWidth(double x1, double x2) {
    double width = fabs(x2 - x1);  // Absolute difference for width
    printf("The width between the two points is: %.2f\n", width);
    return width;
}

// Function to calculate the height between two points
double calculateHeight(double y1, double y2) {
    double height = fabs(y2 - y1);  // Absolute difference for height
    printf("The height between the two points is: %.2f\n", height);
    return height;
}

int main() {
    // Ask for the coordinates of two points
    double x1 = askForUserInput("x1");
    double y1 = askForUserInput("y1");
    double x2 = askForUserInput("x2");
    double y2 = askForUserInput("y2");
    
    // Calculate the distance between the two points
    double distance = calculateDistance(x1, y1, x2, y2);
    
    // Calculate the perimeter and area based on the distance (treated as diameter)
    calculatePerimeter(distance);
    calculateArea(distance);
    
    // Calculate the width and height between the two points
    calculateWidth(x1, x2);
    calculateHeight(y1, y2);

    return 0;
}

