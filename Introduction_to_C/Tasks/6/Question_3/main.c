#include <stdio.h>
#include <stdlib.h>
void copy(char arr2[],char arr[]);
int main()
{
    char arr[40]={'Eng.','Alaa', 'Elkaffas'};
    char arr2[30];
    copy(arr2,arr);

    return 0;
}

void copy(char arr2[],char arr[]){

    int i=0;
    while(arr[i]!='\0'){
        arr2[i]=arr[i];
    }
    arr2[i]='\0';
    printf("The String is Copied Successfully");

}
