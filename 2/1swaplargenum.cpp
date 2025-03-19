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