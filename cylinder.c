#include <stdio.h>
#define PI 3.14159  // Define the value of pi

int main() {
    float radius, height;
    float volume, surface_area;

    // Prompt user for cylinder dimensions
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume: V = π * r^2 * h
    volume = PI * radius * radius * height;

    // Calculate surface area: A = 2 * π * r * (r + h)
    surface_area = 2 * PI * radius * (radius + height);

    // Display results
    printf("\nCylinder Volume: %.2f\n", volume);
    printf("Cylinder Surface Area: %.2f\n", surface_area);

    return 0;
}
