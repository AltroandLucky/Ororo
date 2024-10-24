#include <iostream>
using namespace std;

class Point
{
    int s;
    int c;
public:

    Point() 
    {
        cout << "Default constructor\n";
        s = 0;
        c = 0;
    }

 
    Point(int x1, int y1)  
    {
        cout << "Constructor with parameters\n";
        s = x1;
        c = y1;
    }


    void Output()
    {
        cout << "X: " << s << "\tY: " << c << endl;
    }

  
    Point operator+(const Point& b)
    {
        Point result;
        result.s = s + b.s;
        result.c = c + b.c;
        return result;
    }

 
    Point operator+(int value)
    {
        Point result;
        result.s = s + value;
        result.c = c + value;
        return result;
    }

 
    Point operator*(int value)
    {
        Point result;
        result.s = s * value;
        result.c = c * value;
        return result;
    }

 
    Point operator/(int value)
    {
        Point result;
        if (value != 0) 
        {
            result.s = s / value;
            result.c = c / value;
        }
        return result;
    }


    Point operator*(const Point& b)
    {
        Point result;
        result.s = s * b.s;
        result.c = c * b.c;
        return result;
    }

  
    Point operator/(const Point& b)
    {
        Point result;
        if (b.s != 0 && b.c != 0) 
        {
            result.s = s / b.s;
            result.c = c / b.c;
        }
        return result;
    }
};

int main()
{
    srand(unsigned(time(0))); 

   
    Point p(2, 4);
    Point d(1, 2);

    
    Point f = p + d;
    f.Output();

   
    f = p + 10;
    f.Output();

   
    f = p * 3;
    f.Output();

   
    f = p / 2;
    f.Output();

  
    f = p * d;
    f.Output();

  
    f = p / d;
    f.Output();

  
}
