#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5]={1,2,10,9,5};
    int max=array[0];
    int min=array[0];
    for(int i=0; i<5; i++){
        if(array[i]>max){
           max=array[i];
    }
        if(array[i]<min){
            min=array[i];
    }
    }
    printf("MAX is %d\t", max);
    printf("MIN is %d", min);
    return 0;

}
