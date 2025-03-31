#include <stdio.h>
#include <stdlib.h>

typedef struct Employee{
    char name[40];
    int netSalary;

}Employee;
Employee employeeData();
Employee name_Salary();

int main(){
    Employee person[3];
    employeeData(person);
    name_Salary(person);

    return 0;
}

Employee employeeData(Employee person[]){
    printf("\t*********Enter Data********\n");
    for(int i=0;i<3;i++){
        printf("Name: \n");
        scanf("%s", &person[i].name);
        printf("Net salary: \n");
        scanf("%d", &person[i].netSalary);
        break;
    }
}

Employee name_Salary(Employee person[]){
    printf("\t*********Data found********");
    for(int i=0;i<3;i++){
        printf("\nName: %s \n", person[i].name);
        printf("NET Salary: %d", person[i].netSalary);
        break;
    }
}

