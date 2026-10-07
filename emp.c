#include <stdio.h>

int main()
{
    int employeeID;
    char employeeName[50];
    float salary, incomeTax, netSalary;
    printf("Enter Employee ID: ");
    scanf("%d", &employeeID);
    printf("Enter Employee Name: ");
    scanf("%s", employeeName);
    printf("Enter Salary: ");
    scanf("%f", &salary);
    incomeTax = salary * 0.10;
    netSalary = salary - incomeTax;
    printf("\n Employee Details \n");
    printf("Employee ID: %d\n", employeeID);
    printf("Employee Name: %s\n", employeeName);
    printf("Salary: %.2f\n", salary);
    printf("Income Tax (10%%): %.2f\n", incomeTax);
    printf("Net Salary: %.2f\n", netSalary);
    return 0;
}