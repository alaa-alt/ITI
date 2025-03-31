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
        cout<<"DESTRUCTOR "<<endl;
    }

    void push(int x);
    int pop();
    void print();
    friend void viewContent(Stack &x);
};
int main()
{
    Stack st(3);
    st.push(4);
    st.push(3);
    Stack st2(4);
    st2.push(5);
    st2.push(4);
    st2.push(3);
    viewContent(st2);
    return 0;
}
void viewContent(Stack &x){
    int t=x.topOfStack;
    while (t!=0){
            cout<<x.arr[--t]<<endl;
    }
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
