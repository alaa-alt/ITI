#include <stdio.h>
#include <stdlib.h>

typedef struct Citizen{
    char name[40];
    int age;

}Citizen;
void Data();
void print();

int main(){
    Citizen *person;
    person=(Citizen *)malloc(sizeof(Citizen)*4);
    Data(person,3);
    print(person,3);


    return 0;
}

void Data(Citizen person[],int size){
    printf("\t*********Enter Data********\n");
    for(int i=0;i<size;i++){
        printf("Name: \n");
        scanf("%s", &person[i].name);
        printf("Age: \n");
        scanf("%d", &person[i].age);

    }
}

void print(Citizen person[],int size){
    printf("\t*********Data found********");
    for(int i=0;i<size;i++){
        printf("\nName: %s \n", person[i].name);
        printf("Alaa: %d", person[i].age);
    }
}

