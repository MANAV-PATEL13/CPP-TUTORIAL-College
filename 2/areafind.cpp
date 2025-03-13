//  Design classes named Triangle, Square, and Circle. Make the different function in each class
// to find area of particular shape.

#include <iostream>
using namespace std;

class area
{
public:
     double cir(int r)
     {
          double area;
          area = 3.14 * r * r;
          return area;
     }

     double square(int l)
     {
          double area;
          area = l * l;
          return area;
     }
};

int main()
{
     area m;
     double circle, radi;
     cout << "Enter a radious : ";
     cin >> radi;
     circle = m.cir(radi);
     cout << "The area of circle is " << circle << endl;

     double l;
     cout << "Enter a value of l for square :";
     cin >> l;
     double square = m.square(l);
     cout << "Area of the circle is " << square;
     return 0;
}
