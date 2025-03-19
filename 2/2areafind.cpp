//  Design classes named Triangle, Square, and Circle. Make the different function in each class
// to find area of particular shape.

#include <iostream>
using namespace std;
#define PI 3.14

class rectangle
{
public:
     double getArea(double x, double y = 1)
     {
          if (x != 1 && y == 1)
          {
               y = x;
          }

          return x * y;
     }
};

class triangle
{
public:
     double getArea(double x, double y)
     {
          return (x * y) / 2;
     }
};

class circle
{
public:
     double getArea(double x)
     {
          return PI * x * x;
     }
};

int main()
{
     double a, b;
     rectangle obj;
     triangle obj1;
     circle obj2;
     cout << "Enter length for rectangle(square): ";
     cin >> a >> b;
     cout << "The area of rectangle(square) is : " << obj.getArea(a, b) << endl;
     cout << "Enter hight & base for triangle: ";
     cin >> a >> b;
     cout << "The area of triangle is : " << obj1.getArea(a, b) << endl;
     cout << "Enter radious for circle: ";
     cin >> a;
     cout << "The area of circle is : " << obj2.getArea(a) << endl;
     return 0;
}

/*

output : 
Enter length for rectangle(square): 4 4
The area of rectangle(square) is : 16
Enter hight & base for triangle: 4 10
The area of triangle is : 20
Enter radious for circle: 4
The area of circle is : 50.24

*/