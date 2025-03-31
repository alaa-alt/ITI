#include <stdio.h>
#include <stdlib.h>
void swap(int x, int y);
void swap_2(int *x, int *y);
int main()
{
    int x,y;
    printf("Enter the values you want to swap (X and Y): \n");
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);
    swap(x,y);
    printf("The swaped X is: %d\n", x);
    printf("The swaped Y is: %d\n", y);
    swap_2(&x,&y);
    printf("The swaped X is: %d\n", x);
    printf("The swaped Y is: %d\n", y);
    return 0;
}
void swap(int xx, int yy) {
    int temp;
    temp=xx;
    xx=yy;
    yy=temp;
    }

void swap_2(int *x, int *y){
    int p=*x;
    *x=*y;
    *y=p;
}
