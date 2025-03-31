#include <iostream>

using namespace std;

void call_by_value(int n1,int n2);
void call_by_address(int *n1,int *n2);
void call_by_refrence(int &n1,int &n2);
int main()
{
    int num1, num2;
    cin >>num1;
    cin>>num2;
    call_by_value(num1, num2);
    cout<<num1<<" "<<num2<<endl;
    call_by_address(&num1, &num2);
    cout<<num1<<" "<<num2<<endl;
    call_by_refrence(num1, num2);
    cout<<num1<<" "<<num2<<endl;

    return 0;
}

void call_by_value(int n1,int n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
void call_by_address(int *n1, int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;

}
void call_by_refrence(int &n1, int &n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
