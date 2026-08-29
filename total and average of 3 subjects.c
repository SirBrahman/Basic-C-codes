#include <stdio.h>

int main()
{
int s1, s2, s3, total, average;
scanf("%d %d %d", &s1, &s2, &s3);

total = s1 + s2 + s3;
average = total / 3;

printf("Total = %d\n", total);
printf("Average = %d", average);

return 0;
}
