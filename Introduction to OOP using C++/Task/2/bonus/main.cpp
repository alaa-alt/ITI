#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "cursor.h"
//keys
#define UP 56
#define DOWN 50
#define HOME 71
#define END 49
#define ENTER 13
#define ESC 27

void displayMenu(char Menu[3][10], int currentOption);
using namespace std;
class Stack
{
private:
    int SIZE;
    int *arr;
    int topOfStack;
public:
    Stack();
    Stack(int i=5)
    {
        topOfStack=0;
        SIZE = i;
        arr = new int[SIZE];
    }
    ~Stack()
    {
        delete[] arr;
        cout<<"DESTRUCTOR"<<endl;
    }

    void push(int x);
    int pop();
    void print();
};


int main()
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),COMMON_LVB_REVERSE_VIDEO);
    char Menu[3][10] = {"PUSH    ", "POP", "PRINT    "};
    char key;
    int currentOption = 0;
    displayMenu(Menu, currentOption);
    Stack s1(5);
    system("Color D7");
    do
    {
        key = getch();

        switch (key)
        {
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
            case 0://PUSH
                system("cls");
                int x;
                cout<<"=============PUSH============"<<endl;
                cin>>x;
                s1.push(x);
                displayMenu(Menu, currentOption);
                break;
            case 1://POP
                system("cls");
                cout<<"==========POPPED SUCCESSFULLY=============\n"<<endl;
                s1.pop();
                break;
            case 2://PRINT
                system("cls");
                printf("============PRINT===========\n");
                s1.print();
                break;
            }

        }
    }
    while (key != ESC);

    return 0;
}

void Stack::push(int n)
{
    if (topOfStack == SIZE)
    {
        cout<<"Stack is FULL"<<endl;
    }
    else
    {
        arr[topOfStack]=n;
        topOfStack++;

    }

}
int Stack::pop()
{
    int returnValue=0;
    if(topOfStack == 0)
    {
        cout<<"Stack is EMPTY"<<endl;
        returnValue=-1;
    }
    else
    {
        topOfStack--;
        returnValue=arr[topOfStack];
    }
    return returnValue;
}

void Stack::print()
{
    for(int i=0; i<topOfStack; i++)
    {
        cout<<arr[i]<<endl;
    }
}

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


