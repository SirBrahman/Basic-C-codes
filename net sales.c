#include <stdio.h>

int main()
{
int grossSales, discount, netSales;
scanf("%d", &grossSales);

discount = (grossSales * 10) / 100;
netSales = grossSales - discount;

printf("Discount = %d\n", discount);
printf("Net Sales = %d", netSales);

return 0;
}
