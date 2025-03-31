#include <iostream>

using namespace std;
class Shape
{
private:
    int color;
public:
    Shape()
    {
        color=0;
        cout<<"Shape CONSTRUCTOR"<<endl;
    }
    Shape(int x)
    {
        color=x;
        cout<<"Shape CONSTRUCTOR"<<endl;
    }
    void setColor(int x)
    {
        color=x;
    }
    int getColor()
    {
        return color;
    }
    ~Shape()
    {
        cout<<"DESTRUCTOR"<<endl;
    }
};
class Point
{
    int x;
    int y;
public:
    Point();
    Point(int m, int n);
    void setX(int m);
    void setY(int n);
    int getX();
    int getY();
};
Point::Point(int m, int n) : x(m), y(n) {}
int Point::getX()
{
    return x;
}
int Point::getY()
{
    return y;
}
class Line : public Shape
{
private:
    Point start;
    Point End;
public:
    Line():start(), End()
    {
        cout<<"At line Const. "<<endl;
    }
    Line(int x1, int y1, int x2, int y2): start(x1, y1), End(x2, y2)
    {
        cout<<"At line Const."<<endl;
    }
    void draw()
    {
        Line(start.getX(), start.getY(), End.getX(), End.getY());
    }
    ~Line()
    {
        cout<<"line DESTRUCTOR"<<endl;
    }
};

class Rectangle: public Shape
{
private:
    Point ul;
    Point lr;
public:
    Rectangle():ul(), lr()
    {
        cout<<"At Rectangle Const."<<endl;
    }
    Rectangle (int x1, int y1, int x2, int y2): ul(x1,y1), lr(x2,y2)
    {
    }
    void draw()
    {
        Rectangle(ul.getX(), ul.getY(), lr.getX(), lr.getY());
    }
        ~Rectangle(){
        cout<<"Rectangle DESTRUCTOR"<<endl;
    }
};

class Circle: public Shape
{
private:
    Point center;
    int radius;
public:
    Circle():center()
    {
        radius=0;
        cout<<"At Circle Const."<<endl;
    }
    Circle(int m, int n, int r): center(m,n)
    {
        radius=r;
        cout<<"At circle Const."<<endl;
    }
    void draw()
    {
        Circle(center.getX(), center.getY(), radius);
    }
        ~Circle(){
        cout<<"DESTRUCTOR"<<endl;
    }
};

int main()
{
    Circle cArr[1]= {Circle(50,50,50)};
    Rectangle rArr[1]= {Rectangle(30,40,170,100)};
    Line lArr[1]= {Line(420,50,300, 300)};

    return 0;
}
