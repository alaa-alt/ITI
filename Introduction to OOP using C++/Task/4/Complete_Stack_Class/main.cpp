#include <iostream>

using namespace std;
template <class T>
class Stack
{
private:
    int SIZE;
    T *arr;
    int topOfStack;
    static int counter;
    friend void viewContent(Stack x);
public:
    Stack(int i=10)
    {
        topOfStack=0;
        SIZE = i;
        arr = new T[SIZE];
        counter++;
        cout<<"This is Stack for object No. "<<counter<<endl;
    }
    Stack(Stack &z)
    {
        topOfStack=z.topOfStack;
        SIZE = z.SIZE;
        arr = new T [SIZE];
        for (int i=0; i<topOfStack; i++)
        {
            arr[i]=z.arr[i];
        }
        counter++;

    }
    ~Stack()
    {
        delete[] arr;
        counter--;
        cout<<"DESTRUCTOR for object no. "<<counter<<endl;
    }

    void push(T);
    T pop();
    void print();
};
int main()
{
    Stack<int> st(3);
    st.push(4);
    st.push(3);
    st.print();
    Stack<char> st2(4);
    st2.push('a');
    st2.push('l');
    st2.push('a');
    st2.push('a');
    st2.print();
    return 0;
}
template <class T>
T Stack<T>::pop()
{
    int returnValue=0;
    if(topOfStack == 0)
    {
        cout<<"Stack is EMPTY"<<endl;
        returnValue=-1;
    }
    else
    {
        topOfStack--;
        returnValue=arr[topOfStack];
    }
    return returnValue;
}
template <class T>
void viewContent(Stack<T> x) {
    int t = x.topOfStack;
    while (t != 0) {
        cout << x.arr[--t] << endl;
    }
}
template <class T>
void Stack<T>::print()
{
    for(int i=0; i<topOfStack; i++)
    {
        cout<<arr[i]<<endl;
    }
}
template<class T>
int Stack<T>::counter=0;
template <class T>
void Stack<T>::push(T n) {
    if (topOfStack == SIZE) {
        cout << "Stack is FULL" << endl;
    } else {
        arr[topOfStack] = n;
        topOfStack++;
    }
}
