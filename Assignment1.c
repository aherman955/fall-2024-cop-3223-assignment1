//Assignment 1- fractures

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

// Function declarations
double askForUserInput(const char* coordinate);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Function to ask for user input
double askForUserInput(const char* coordinate) {
    double value;
    printf("Enter the value for %s: ", coordinate);
    scanf("%lf", &value);
    return value;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1 = askForUserInput("x1");
    double y1 = askForUserInput("y1");
    double x2 = askForUserInput("x2");
    double y2 = askForUserInput("y2");

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Calculated distance: %.2f\n", distance);
    return distance;
}

// Main function
int main() {
    calculateDistance();
    // You can define and call other functions (e.g., calculatePerimeter, etc.) here.
    return 0;
}
