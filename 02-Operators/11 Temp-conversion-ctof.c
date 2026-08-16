// wap to accept user temperature in degree celcius and convert it into degree  f?
#include <stdio.h>

int main()
{
    float temperature, celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    celsius = temperature;
    fahrenheit = (temperature * 9 / 5) + 32;

    printf("Temperature in Celsius = %.2f C\n", celsius);
    printf("Temperature in Fahrenheit = %.2f F\n", fahrenheit);

    return 0;
}