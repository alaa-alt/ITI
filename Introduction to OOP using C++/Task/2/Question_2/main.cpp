#include <iostream>

using namespace std;
class Stack{
private:
    int SIZE;
    int *arr;
    int topOfStack;
public:
    Stack();
    Stack(int i=10){
        topOfStack=0;
        SIZE = i;
        arr = new int[SIZE];
        cout<<"Constructor"<<endl;
    }
    ~Stack(){
        delete[] arr;
        cout<<"DESTRUCTOR"<<endl;
    }

    void push(int x);
    int pop();
    void print();
};


int main()
{
    Stack s1(5);
    s1.push(4);
    s1.push(3);
    s1.pop();
    s1.print();
    return 0;
}

void Stack::push(int n){
    if (topOfStack == SIZE){
        cout<<"Stack is FULL"<<endl;
    }else{
        arr[topOfStack]=n;
        topOfStack++;

    }

}
int Stack::pop(){
    int returnValue=0;
    if(topOfStack == 0){
        cout<<"Stack is EMPTY"<<endl;
        returnValue=-1;
    }
    else{
        topOfStack--;
        returnValue=arr[topOfStack];
    }
return returnValue;
}

void Stack::print(){
for(int i=0; i<topOfStack;i++){
    cout<<arr[i]<<endl;
}
}
