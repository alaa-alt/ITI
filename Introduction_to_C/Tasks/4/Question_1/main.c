#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "cursor.h"
//keys
#define UP 56
#define DOWN 50
#define HOME 55
#define END 49
#define ENTER 13
#define ESC 27
//
#define SIZE 3

typedef struct Employee{
    char name[40];
    int code;
    int net_salary;


}Employee;

void displayMenu(char Menu[3][10], int currentOption) {
    system("cls");

    for (int i = 0; i < 3; i++) {
        gotoxy(30, 5 + (i * 5));
        if (i == currentOption) {
            printf("\t\t\t>> %s\n\n\n", Menu[i]);
        } else {
            printf("\t\t\t   %s\n\n\n", Menu[i]);
        }
    }
}

int main() {
    char Menu[3][10] = {"Add    ", "Display", "Exit    "};
    char key;
    int currentOption = 0;
    displayMenu(Menu, currentOption);
    int counter=0;
    do {
        key = getch();

        switch (key) {
            case UP:
                currentOption = (currentOption - 1 + 3) % 3;
                displayMenu(Menu, currentOption);
                break;
            case DOWN:
                currentOption = (currentOption + 1) % 3;
                displayMenu(Menu, currentOption);
                break;
            case HOME:
                currentOption = 0;
                displayMenu(Menu, currentOption);
                break;
            case END:
                currentOption = 2;
                displayMenu(Menu, currentOption);
                break;
            case ENTER:
                switch (currentOption) {
                    case 0://Add
                        system("cls");
                        Employee data[SIZE];
                        printf("==========Entered Data for Employee:=============\n");
                        printf("\nENTER CODE: ");
                        scanf("%d", &data[counter].code);
                        printf("\nENTER NAME: ");
                        scanf("%s", data[counter].name);
                        printf("\nENTER NET SALARY:");
                        scanf("%d", &data[counter].net_salary);
                        if(counter<3){
                            counter++;
                        }
                        displayMenu(Menu, currentOption);
                        break;
                    case 1://display
                        system("cls");
                        printf("==========Displaying The Entered Data=============\n");
                        int counter_2=0;
                      if(counter_2<SIZE){
                            printf("Code: %d\n", data[counter_2].code);
                            printf("\nName: %s\n", data[counter_2].name);
                            printf("\nNet Salary: %d\n", data[counter_2].net_salary);
                            counter_2++;
                        }

                        while (getch() != ESC)
                        displayMenu(Menu, currentOption);
                        break;
                    case 2://Exit
                        system("cls");
                        printf("Are you sure you want to exit?(y/n)\n");
                        char answer;
                        scanf("%c",&answer);
                        if(answer =='y'){
                            return 0;
                        }else if(answer =='n'){
                            displayMenu(Menu, currentOption);
                        }

                }
                break;
        }
    } while (key != ESC);

    return 0;
}




