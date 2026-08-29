// Write a program  to take three employee in Which display salary, mobile no,and employee id of an employee?
#include <stdio.h>

int main()
{
    struct employee
    {
        int employee_id;
        float salary;
        long long mob_no;
    };

    struct employee e1, e2, e3;

    printf("\nEnter employee_id, salary and mobile_no:\n");

    scanf("%d %f %lld", &e1.employee_id, &e1.salary, &e1.mob_no);
    scanf("%d %f %lld", &e2.employee_id, &e2.salary, &e2.mob_no);
    scanf("%d %f %lld", &e3.employee_id, &e3.salary, &e3.mob_no);

    printf("\nEntered result:\n");

    printf("%d %.2f %lld\n", e1.employee_id, e1.salary, e1.mob_no);
    printf("%d %.2f %lld\n", e2.employee_id, e2.salary, e2.mob_no);
    printf("%d %.2f %lld\n", e3.employee_id, e3.salary, e3.mob_no);

    return 0;
}
