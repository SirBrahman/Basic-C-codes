#include <stdio.h>

int main()
{
    int fahrenheit, celsius;
    scanf("%d", &fahrenheit);

    celsius = (5 * (fahrenheit - 32)) / 9;

    printf("Celsius = %d", celsius);
    return 0;
}
