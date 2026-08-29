#include <stdio.h>

int main()
{
int gross, allowance, deduction, netSalary;
scanf("%d", &gross);

allowance = (gross * 10) / 100;
deduction = (gross * 3) / 100;
netSalary = gross + allowance - deduction;

printf("Allowance = %d\n", allowance);
printf("Deduction = %d\n", deduction);
printf("Net Salary = %d", netSalary);

return 0;
}
