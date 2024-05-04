#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h> 
int main() {
    double height, volume;//define height, volume
    double radius = 2.2; // Define radius

    
    printf("Enter the height of the cylinder: ");// enter the height 
    scanf("%lf", &height);

    volume = M_PI * pow(radius, 2) * height; // Calculate the volume

    printf("The volume of the cylinder is: %lf cubic meters\n", volume);// Print the result

    return 0;
}