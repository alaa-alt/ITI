#include <iostream>
using namespace std;

class GeoShape
{
protected:
    float dim1;
    float dim2;

public:
    GeoShape()
    {
        dim1 = dim2 = 0;
        cout << "default constructor" << endl;
    }
    GeoShape(float x)
    {
        dim1 = dim2 = x;
        cout << "single-parameter constructor" << endl;
    }
    GeoShape(float x, float y)
    {
        dim1 = x;
        dim2 = y;
        cout << "two-parameter constructor" << endl;
    }
    ~GeoShape()
    {
        cout << "GeoShape destructor" << endl;
    }

    void setDim1(float x)
    {
        dim1 = x;
    }

    void setDim2(float x)
    {
        dim2 = x;
    }

    float getDim1()
    {
        return dim1;
    }

    float getDim2()
    {
        return dim2;
    }

    virtual float calculateArea()
    {
        return 0;
    }
    float sumAreas(GeoShape *p1, GeoShape *p2, GeoShape *p3);
};
class Triangle : public GeoShape
{
public:
    Triangle(float b, float h) : GeoShape(b, h)
    {
        cout << "Triangle constructor" << endl;
    }
    ~Triangle()
    {
        cout << "Triangle destructor" << endl;
    }

    virtual float calculateArea() override
    {
        return 0.5 * dim1 * dim2;
    }
};
class Rectangle: public GeoShape
{
public:
    Rectangle(float x, float y):GeoShape(x,y)
    {
        cout << "Rectangle constructor" << endl;
    }
    ~Rectangle()
    {
        cout << "Triangle destructor" << endl;
    }
    virtual float calculateArea()
    {
        return dim1*dim2;
    }
};
class Circle: public GeoShape
{
public:
    Circle(float r) : GeoShape(r)
    {
        cout << "Circle constructor" << endl;
    }
    setDim1(float r)
    {
        dim1=dim2=r;
    }
    getDim1()
    {
        return dim1;
    }
    virtual float calculateArea()
    {
        return (22.0/7)*dim1*dim2;
    }
};
class Square: private Rectangle
{
public:
    Square(float x) : Rectangle(x,x)
    {
        cout << "Square constructor" << endl;
    }
    setDim1(float x)
    {
        dim1=dim2=x;
    }
    getDim1()
    {
        return dim1;
    }
    virtual float calculateArea()
    {
        return Rectangle::calculateArea();
    }
};
float sumAreas(GeoShape *p1, GeoShape *p2, GeoShape *p3)
{
    return p1->calculateArea()+p2->calculateArea()+p3->calculateArea();
}
int main()
{
    Triangle myT(20,10);
    Rectangle myR(2,5);
    Circle myC(5);
    cout<<sumAreas(&myT, &myR, &myC)<<endl;
}

