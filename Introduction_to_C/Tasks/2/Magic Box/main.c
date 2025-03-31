#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    printf("Enter the desired rows and columns:");
    scanf("%d", &number);

    int Box[number][number];
    memset(Box, 0, sizeof(Box)); //to fill this block of memory with 0
    int upper = number*((number^2)+1);
    int sum=upper/2;
//generate numbers for the array
 for (int i=0 ; i < number; i++) {
        for (int j = 1; j < number; j++) {
                Box[i][j]=sum;
                 i = (i - 1 + number) %number;
                 j = (j + 1) %number;

printf("%3d \t", Box[i][j]);
    }
 printf("\n\n");
        }


 /*
    for(int iteration=1; iteration<=number*number; iteration++){
        Box[i][j]=iteration;
        int i_new = (i - 1 + number) %number;
        int j_new = (j + 1) %number;
        if(Box[i_new][j_new] != 0){
            i = (i+1)% number;
        }else{
        i = i_new;
        j = j_new;
        }
    }
    /*
    for (i = 0; i < number; i++) {
        for (j = 0; j < number; j++) {
            printf("%3d \t", Box[i][j]);
        }
            printf("\n\n");
    }*/



return 0;
}
