//Create a class Student with student name and age as data members. Define functions to read 
//and display the data members.
#include <iostream>
using namespace std;

class Student {
          string name;
          int age;

public:
          void read(){
                    cout << "Enter a name : ";
                    getline(cin,name);//when  char string then use cin.getline(name,20);
                    cout << "Enter a age : ";
                    cin >> age;
          }
          void display(){
                    cout << "Student name : " << name << endl;
                    cout << "Age : " << age << endl;
          }
    
};

int main() {
    Student obj;
    obj.read();
    obj.display();
   
    return 0;
}

/*

Enter a name : Manav Patel 
Enter a age : 18
Student name : Manav Patel
Age : 18

*/