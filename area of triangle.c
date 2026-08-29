#include <stdio.h>

int main(void)
{
int base, height, area;
printf("Enter the value of base");
printf("Enter the value of height");
scanf("%d %d", &base, &height);

area = (base * height) / 2;

printf("Area of triangle = %d", area);
}
