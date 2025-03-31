#include <stdio.h>
#include <stdlib.h>

typedef struct Employee{
    char name[40];
    int ID;
    int netSalary;

}Employee;
Employee employeeData();
Employee print();

int main(){
    int SIZE;
    int *person;
    person=(int *)malloc(sizeof(int *)*4);
    printf("Enter the number of employees you want to enter: \n");
    scanf("%d", &SIZE);
    employeeData(person, SIZE); //first function
    print(person, SIZE); //second


    return 0;
}

void employeeData(Employee person[], int size){
    printf("\t*********Enter Data********\n");
    for(int i=0;i<size;i++){
        printf("Name: \n");
        scanf("%s", &person[i].name);
        printf("ID: \n");
        scanf("%d", &person[i].ID);
        printf("Net Salary: \n");
        scanf("%d", &person[i].netSalary);
    }
}

void print(Employee person[], int size){
    printf("\t*********Data found********");
    for(int i=0;i<size;i++){
        printf("\nID: %d \n", person[i].ID);
        printf("Net Salary: %d", person[i].ID);
    }
}

