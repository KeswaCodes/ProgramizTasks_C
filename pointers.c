#include <stdio.h>

int main ()
{
    
    double *ptr, salary, scale;
    scale = 2.00;
    ptr = &salary;
    
    printf("Please enter your salary amount:\n", salary);
    scanf("%lf", ptr);
    
    printf("The value of the salary is: %.2lf\n", *ptr);
    
    *ptr *= scale;
    
    printf("The value of the new salary is: %.2lf\n", *ptr);
    
    return (0);
}
