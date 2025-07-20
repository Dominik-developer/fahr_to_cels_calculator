#include <stdio.h>
#include <string.h>


int main() {

    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Fahrenheit to Celsius Calculator\n\n");
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("\nTemperature in Celsius: %.1f\n", celsius);


    return 0;
}
