#include <iostream>

using namespace std;

class Stack{
private:
    int SIZE;
    int *arr;
    int topOfStack;
    static int counter;
    friend void viewContent(Stack x);

public:
    Stack(int i=10){
        topOfStack=0;
        SIZE = i;
        arr = new int[SIZE];
        counter++;
        cout<<"This is Stack for object No. "<<counter<<endl;
    }
    Stack(Stack &z){
    topOfStack=z.topOfStack;
    SIZE = z.SIZE;
    arr = new int [SIZE];
    for (int i=0; i<topOfStack;i++){
        arr[i]=z.arr[i];
    }
    counter++;

}
    ~Stack(){
        delete[] arr;
        counter--;
        cout<<"DESTRUCTOR for object no. "<<counter<<endl;
    }

    void push(int x);
    int pop();
    void print();

};
int Stack::counter=0;
int main()
{
    Stack st(3);
    st.push(4);
    st.push(3);
    st.print();
    Stack st2(4);
    st2.push(5);
    st2.push(4);
    st2.push(3);
    viewContent(st2);
    return 0;
}
void viewContent(Stack x){
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


