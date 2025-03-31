#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    printf("Enter number for the magic box");
    scanf("%d", &number);
    int magic_box[number][number];
    magic_box[0][number/2]=1;
    for(int i=0; i<number;i++){
        for(int j=0; j<number;j++){
            magic_box[i][j];

        }
    }

    return 0;
}
