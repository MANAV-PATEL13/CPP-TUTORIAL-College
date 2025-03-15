# Tutorial - 3
##  Write a program to create a  Constructor to llocate memory dynamically and read value. Create a Display function to display the string. Create a Destructor function to free allocated memory.

```c++
// Write a program to create a  Constructor to allocate memory dynamically and read value.
// Create a Display function to display the string. Create a Destructor function to free allocated memory.

#include <iostream>
using namespace std;

class construct
{
    char s[30];
public:
    construct(char x[])
    { // allocate memory
        cout << "construct is called" << endl;
        int i = 0;
        for (i = 0; x[i] != '\0'; i++)
        {
            s[i]=x[i];
        }      
        s[i++]='\0';
    }
    void display()
    {
        cout << "String is : " << s<< endl;
    }
    ~construct()
    {
        cout << "destructor is called" << endl;
    }
};
int main()
{
    char s1[30];
    cout << "Enter a string: ";
    cin.getline(s1,25);
    construct c1(s1);
    c1.display();
    return 0;
}
```