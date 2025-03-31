#include <stdio.h>
#include <stdlib.h>
#define SIZE 1
typedef struct Employee{
    char name[40];
    int code;
    int net_salary;


}Employee;
int main()
{   Employee data;
    for(int i=0; i<SIZE; i++){
        printf("ENTER CODE: ");
        scanf("%d", &data.code);
        printf("ENTER NAME: ");
        scanf("%s", data.name);
        printf("ENTER NET SALARY: ");
        scanf("%d", &data.net_salary);
    }
    for(int i=0; i<SIZE; i++){
        printf("Code: %d\n", data.code);
        printf("Name: %s\n", data.name);
        printf("Net Salary: %d", data.net_salary);
    }

    return 0;
}
