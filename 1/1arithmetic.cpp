// Design a simple class with all arithmetic function. Use them in MAIN function
#include <iostream>
using namespace std;

class calc
{
public:
          int sum(int a, int b)
          {
                    return a + b;
          }
          int sub(int a, int b)
          {
                    return a - b;
          }
          int mul(int a, int b)
          {
                    return a * b;
          }
          int div(int a, int b)
          {
                    if (b == 0)
                    {
                              cout << "Error ! Division by zero is not allowed." << endl;
                    }
                    return a / b;
          }
};

int main()
{
 calc obj;
          cout << "sum of 10 and 15 is " << obj.sum(10,15) << endl;
          cout << "subtract of 15 and 10 is " << obj.sub(15,10) << endl;
          cout << "multipication is 5 and 5 is " << obj.mul(5,5)<< endl;
          cout << "division of 10 and 2 is " << obj.div(10,2)<<endl;
          return 0;
}
/*

sum of 10 and 15 is 25
subtract of 15 and 10 is 5
multipication is 5 and 5 is 25
division of 10 and 2 is 5

*/