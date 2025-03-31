#include <iostream>

using namespace std;

class Base{
private:
    int a;
    int b;
public:
    Base(){
        a=b=0;
        cout<<"CONSTRUCTOR"<<endl;
    }
    Base(int x, int y){
        a=x;
        b=y;
        cout<<"CONSTRUCTOR"<<endl;
    }
    void setA(int x){
    a=x;
    }
    void setB(int y){
    b=y;
    }
    int getA(){
    return a;
    }
    int getB(){
    return b;
    }
    int product(){
    return a*b;
    }
    ~Base(){
        cout<<"DESTRUCTOR"<<endl;
    }
};
class Derived : public Base{
private:
    int c;
public:
    Derived():Base(){
    c=0;
    cout<<"CONSTRUCTOR"<<endl;
    }
    Derived(int x, int y, int z):Base(x,y){
    c=z;
    cout<<"CONSTRUCTOR"<<endl;
    }
    void setC(int z){
    c=z;
    }
    int getC(){
    return c;
    }
    int product(){
    return Base::product()*c;
    }
    ~Derived(){
        cout<<"DESTRUCTOR"<<endl;
    }
};
class SecondDerived : public Derived
{
private:
    int d;

public:
    SecondDerived() : Derived()
    {
        d = 0;
        cout<<"CONSTRUCTOR"<<endl;
    }
    SecondDerived(int x, int y, int m, int z) : Derived(x, y, m)
    {
        d = z;
        cout<<"CONSTRUCTOR"<<endl;
    }

    void setD(int z)
    {
        d = z;
    }

    int getD()
    {
        return d;
    }

    int product()
    {
        return getA() * getB() * getC() * d;
    }
    ~SecondDerived(){
        cout<<"DESTRUCTOR"<<endl;
    }
};

int main()
{
    SecondDerived obj1;
    obj1.setA(3);
    obj1.setB(7);
    obj1.setC(10);
    obj1.setD(0);
    cout<<"Object A*B: "<<obj1.Base::product()<<endl;
    cout<<"Object A*B*C: "<<obj1.Derived::product()<<endl;
    cout<<"Object A*B*C*D: "<<obj1.product()<<endl;
    return 0;
}
