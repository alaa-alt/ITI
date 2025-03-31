#include <stdio.h>
#include <stdlib.h>

int main()
{   char menu;
    printf("Please Select one of the three choices(c for Chicken|b for Beef|f for Fish)\n");
    scanf("%c", &menu);
    switch(menu){
case 'c':
    printf("You Choose Chicken!");
    break;
case 'b':
    printf("You Choose Beef!");
    break;
case 'f':
    printf("You Choose Fish!");
    break;
default:
    printf("You did not choose anything :(");
    }
    return 0;
}
