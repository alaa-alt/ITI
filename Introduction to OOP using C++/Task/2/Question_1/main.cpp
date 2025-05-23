#include <iostream>

using namespace std;

class Complex{

public:
    Complex (){
        real=0;
        img=0;
        cout << "default constructor" << endl;
    }
    Complex(float r, float i){
        real=r;
        img=i;
        cout<<"Overloaded constructor has been activated!"<<endl;
    }

    void setComplex(float r, float i){
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
    ~Complex(){
        cout<<"OBJECTS DESTRUCTED"<<endl;

    }
};
Complex add(Complex c, Complex c2);
Complex sub(Complex c, Complex c2);
int main()
{
    system("cls");
    Complex myComp_1, myComp_2;
    cin>> myComp_1.real;
    cin>> myComp_1.img;
    cin>> myComp_2.real;
    cin>> myComp_2.img;
    Complex c1;
    Complex c(myComp_1.real,myComp_1.img);
    c.print();

   Complex resultComp = add(myComp_1, myComp_2);
    resultComp.print();

    resultComp = sub(myComp_1, myComp_2);
    resultComp.print();
    return 0;
}
void Complex::setReal(float r){
    real = r;
}

void Complex::setImg(float i){
    img = i;
}

float Complex::getReal(){
    return real;
}

float Complex::getImg(){
    return img;
}

Complex add(Complex c, Complex c2){
    Complex temp;
    temp.real=c.real + c2.real;
    temp.img=c.img + c2.img;
    return temp;
}

Complex sub(Complex c, Complex c2){
    Complex temp;
    temp.real=c.real - c2.real;
    temp.img=c.img - c2.img;
    return temp;
}
void Complex::print(){
    if(img<0){
        cout<<real<<" - "<<img<<"i"<<endl;
    }
    else{
        cout<<real<<" + "<<img<<"i"<<endl;
    }

}
