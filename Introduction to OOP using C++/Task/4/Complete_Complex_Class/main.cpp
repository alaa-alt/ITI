#include <iostream>

using namespace std;

class Complex
{
public:
    Complex ()
    {
        real=0;
        img=0;
        //cout << "Default constructor" << endl;
    }
    Complex(float r, float i)
    {
        real=r;
        img=i;
        cout<<"Constructor"<<endl;
    }

    void setComplex(float r, float i)
    {
        real=r;
        img=i;
    }
    float real;
    float img;
    void setReal(float r);
    void setImg(float i);
    float getReal();
    float getImg();
    void print();
    ~Complex()
    {
        cout<<"DESTRUCTORS"<<endl;
    }
    Complex operator + (Complex c);
    Complex operator - (Complex c);
    Complex operator + (float x);
    Complex operator - (float x);
    friend Complex operator + (float x, Complex c);
    friend Complex operator - (float x, Complex c);
    int operator ==(const Complex &c);
    Complex operator+=(Complex c);
    Complex operator++();
    Complex operator++(int);
    Complex operator--();
    Complex operator--(int);
    operator float();
};
int main()
{
    system("cls");
    Complex c1(10,3);
    Complex c2(5,2);
    Complex c3;
    cout<<"c3=c1+c2"<<endl;
    c3=c1+c2;
    c3.print();
    cout<<"c3=c1-c2"<<endl;
    c3=c1-c2;
    c3.print();
    cout<<"c3=c1+10"<<endl;
    c3=c1+ 10;
    c3.print();
    cout<<"c3=c1-10"<<endl;
    c3=c1- 10;
    c3.print();
    cout<<"c3=7+c1"<<endl;
    c3= 7+ c1;
    c3.print();
    cout<<"c3=7-c1"<<endl;
    c3= 7- c1;
    c3.print();
    cout<<"c1==c2"<<endl;
    //c1==c2;
    cout<<"c1+=c2"<<endl;
    c1+=c2;
    c1.print();
    cout<<"++c1"<<endl;
    ++c1;
    c1.print();
    cout<<"--c1"<<endl;
    --c1;
    c1.print();
    cout<<"c1++"<<endl;
    c1++;
    c1.print();
    cout<<"c1--"<<endl;
    c1--;
    c1.print();
    cout<<"float"<<endl;
    (float)c1;
    cout<<"float c1="<<c1<<endl;
    return 0;
}
Complex Complex:: operator + (Complex c)
{
    Complex b;
    b.real = real + c.real;
    b.img = img + c.img;
    return b;

}
Complex Complex:: operator - (Complex c)
{
    Complex b;
    b.real = real - c.real;
    b.img = img - c.img;
    return b;

}
Complex Complex:: operator + (float x)
{
    Complex b;
    b.real = real + x;
    b.img = img;
    return b;

}
Complex Complex:: operator - (float x)
{
    Complex b;
    b.real = real - x;
    b.img = img;
    return b;

}
Complex operator + (float x, Complex c)
{
    Complex b;
    b.real = x+c.real;
    b.img = c.img;
    return b;
}
Complex operator - (float x, Complex c)
{
    Complex b;
    b.real = x-c.real;
    b.img = c.img;
    return b;
}
int Complex :: operator ==(const Complex &c)
{
    Complex b;
    if(c.real==b.real && c.img==b.img)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
Complex Complex:: operator+=(Complex c)
{
    Complex b;
    b.real = b.real+c.real;
    b.img = b.img+c.img;
    return b;
}
Complex Complex :: operator++()
{
    ++real;
    ++img;
    return *this;
}
Complex Complex :: operator++(int)
{
    Complex temp(*this);
    ++real;
    ++img;
    return temp;
}
Complex Complex :: operator--()
{
    --real;
    --img;
    return *this;
}
Complex Complex :: operator--(int)
{
    Complex temp(*this);
    --real;
    --img;
    return temp;
}
Complex ::operator float()
{
    return real;
}

void Complex::print()
{
    if(img<0)
    {
        cout<<real<<" - "<<img<<"i"<<endl;
    }
    else
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

}

