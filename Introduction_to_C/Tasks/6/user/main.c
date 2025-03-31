#include <stdio.h>
#include <Stdlib.h>
#include <conio.h>
#include <windows.h>
//keys
//#define UP 72
//#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define HOME 71
#define INSERT 83
#define END 149
#define ENTER 13
#define ESC 27
#define BS 8
//Functions

void gotoxy(int x, int y);

int main(){
    char str[]={};
    char *ptr_e = str;
    char *ptr_b = str;
    char *ptr_c;
    int cursor_position=0;
    *ptr_c=&cursor_position;
    ptr_b=(char *)malloc(sizeof(char));


do{
    int key=getch();

    if(key == RIGHT) {
        cursor_position=cursor_position+1;
        gotoxy(cursor_position,0);
            }
    else if(key==LEFT){
        cursor_position=cursor_position-1;
        gotoxy(cursor_position,0);

        }
    /*else if (key==INSERT){
            for(int i=0; i<20; i++){
                cursor_position+;
            }
            }*/
    else if (key==BS){
        for (int i = cursor_position - 1; i < (ptr_e - ptr_b) - 1; i++) {
            str[i] = str[i + 1];
        str[--ptr_e - ptr_b] = '\0';
        cursor_position--;

        }

    else if (key==END){
            return 0;
        }
        /*else{
            ptr
            printf("%s", key)
        }*/
}while(*ptr_e!='/0');
return 0;
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

