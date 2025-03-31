#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
typedef struct Employee{
    char name[40];
    int code;
    int net_salary;


}Employee;
int main()
{
    Employee data[SIZE];
    printf("==========Entered Data for 5 Employees:=============\n");
    for(int i=0; i<SIZE; i++){
        printf("\nENTER CODE: ");
        scanf("%d", &data[i].code);
        printf("\nENTER NAME: ");
        scanf("%s", data[i].name);
        printf("\nENTER NET SALARY: \n");
        scanf("%d", &data[i].net_salary);
    }
    printf("==========Displaying The Entered Data=============\n");
    for(int i=0; i<SIZE; i++){
        printf("Code: %d\n", data[i].code);
        printf("\nName: %s\n", data[i].name);
        printf("\nNet Salary: %d\n", data[i].net_salary);
    }

    return 0;
}
