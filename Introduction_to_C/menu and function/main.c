#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
//keys
#define UP 72
#define RIGHT 77
#define DOWN 80
#define LEFT 75
#define HOME 71
#define ENTER 13
#define ESC 27
#define END 83
//
#define SIZE 3
void gotoxy(int x, int y);
typedef struct Employee
{
    char name[10];
    int code;
    int net_salary;


} Employee;

void displayMenu(char Menu[3][10], int currentOption)
{
    system("cls");

    for (int i = 0; i < 3; i++)
    {
        gotoxy(30, 5 + (i * 5));
        if (i == currentOption)
        {
            printf("\t\t\t>> %s\n\n\n", Menu[i]);
        }
        else
        {
            printf("\t\t\t   %s\n\n\n", Menu[i]);
        }
    }
}

int main()
{
    char Menu[3][10] = {"Add    ", "Display", "Exit    "};
    char key;
    int currentOption = 0;
    int counter=0;
    int no_user=0;
    printf("Enter number of Employees:\t");

    scanf("%d",&no_user);
    Employee * users=(Employee *)malloc(no_user*sizeof(Employee));
    system("cls");
    displayMenu(Menu, currentOption);


    do
    {
        key = getch();

        switch (key)
        {
        //0-1+3%3
        //1-1+3%3
        //2-1+3%3
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
            switch (currentOption)
            {
            case 0://Add
                if(counter<no_user)
                {
                    system("cls");
                    //Employee data[counter];
                    printf("==========Entered Data for Employee %d from %d :=============\n",counter,no_user);
                    printf("\nENTER CODE: ");
                    scanf("%d", &users[counter].code);
                    printf("\nENTER NAME: ");
                    scanf("%s", users[counter].name);
                    printf("\nENTER NET SALARY:");
                    scanf("%d", &users[counter].net_salary);
                    counter++;
                }
                else{
                    system("cls");
                    printf("============Array is Full=========");
                    getch();
                }

                displayMenu(Menu, 0);
                break;

            case 1://display
                system("cls");
                for(int i=0; i<counter; i++ ){
                    printf("==========Displaying The Entered Data %d=============\n",i);
                    printf("Code: %d\n", users[i].code);
                    printf("\nName: %s\n", users[i].name);
                    printf("\nNet Salary: %d\n", users[i].net_salary);
                }
                getch();
                system("cls");
                //currentOption=0;
                displayMenu(Menu, 1);
              break;
            case 2://Exit

                return 0;
            break;
            }
            break;
        }
    }
    while (key != ESC);

    return 0;
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

/*
int main(){
    while(1){
        int x=getche();
        printf("%d\n", x);

    }

return 0;}
*/
