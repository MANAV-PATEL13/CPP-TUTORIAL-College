# Tutorial - 3 
## 1. Write  a  program  to  find  the  largest  of  three  integers  using  a  swap  function.  The  function accepts integer arguments by reference. 
```c++
// Write  a  program  to  find  the  largest  of  three  integers  using  a  swap  function.  The  function
// accepts integer arguments by reference.
#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
     int temp = a;
     a = b;
     b = temp;
}

int max(int &x, int &y, int &z)
{
     if (x < y)
     {
          swap(x, y);
     }
     if (x < z)
     {
          swap(x, z);
     }
     return x;
}

int main()
{
     int a, b, c;
     cout << "Enter any 3 number: ";
     cin >> a >> b >> c;
     int max_num = max(a, b, c);
     cout << "The largest number is: " << max_num << endl;
}
/*

output :
Enter any 3 number: 4 14 10 
The largest number is: 14

*/
```
---
## 2. Design classes named Triangle, Square, and Circle. Make the different function in each class to find area of particular shape. 
```c++
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
```
---
## 3.  Create a class with string pointer as data member and member functions.
```c++
#include <iostream>
using namespace std;

class String {
    char *s; 
    int n;   

public:
    void input() {
        cout << "Enter the size of the string: ";
        cin >> n;

        s = new char[n + 1]; 

        cout << "Enter a string: ";
        for (int i = 0; i < n; i++) {
            cin >> s[i]; 
        }
        s[n] = '\0'; 
    }

    void display() {
        cout << "You entered: ";
        for (int i = 0; i < n; i++) {
            cout << s[i]; 
        }
        cout << endl;
    }
};

int main() {
    String obj;
    obj.input();
    obj.display();
    return 0;
}
/*

Output : 
Enter the size of the string: 5
Enter a string: Manav Patel
You entered: Manav

*/
```
---