# **Tutorial 1**

## *1. Design a simple class with all arithmetic functions. Use them in the MAIN function.*

```cpp
#include <iostream>
using namespace std;

class calc {
public:
    int sum(int a, int b) {
        return a + b;
    }
    int sub(int a, int b) {
        return a - b;
    }
    int mul(int a, int b) {
        return a * b;
    }
    int div(int a, int b) {
        if (b == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    calc obj;
    cout << "Sum of 10 and 15 is " << obj.sum(10, 15) << endl;
    cout << "Subtract of 15 and 10 is " << obj.sub(15, 10) << endl;
    cout << "Multiplication of 5 and 5 is " << obj.mul(5, 5) << endl;
    cout << "Division of 10 and 2 is " << obj.div(10, 2) << endl;
    return 0;
}

/*
Output:
Sum of 10 and 15 is 25
Subtract of 15 and 10 is 5
Multiplication of 5 and 5 is 25
Division of 10 and 2 is 5
*/
```
---
## *2. Create a class `Student` with student name and age as data members. Define functions to read and display the data members.*
```cpp
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    void read() {
        cout << "Enter a name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter an age: ";
        cin >> age;
    }

    void display() {
        cout << "Student name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student obj;
    obj.read();
    obj.display();
    return 0;
}

/*
Sample Output:
Enter a name: Manav Patel
Enter an age: 18
Student name: Manav Patel
Age: 18
*/
```
---
## *3. Create a `String` class that includes all the string-related functions like length, copy, compare, concatenation, and substring search (without using inbuilt string functions).*

```cpp
#include <iostream>
using namespace std;

class StringOperations {
public:
    void length(const char str[]) {
        int len = 0;
        while (str[len] != '\0') len++;
        cout << "Length: " << len << endl;
    }

    void copy(const char source[], char destination[]) {
        int i = 0;
        while (source[i] != '\0') {
            destination[i] = source[i];
            i++;
        }
        destination[i] = '\0';
        cout << "Copied String: " << destination << endl;
    }

    void compare(const char str1[], const char str2[]) {
        int i = 0;
        while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
            i++;
        }
        if (str1[i] == str2[i])
            cout << "Strings are equal." << endl;
        else
            cout << "Strings are not equal." << endl;
    }

    void concatenate(char str1[], const char str2[]) {
        int i = 0;
        while (str1[i] != '\0') i++;
        int j = 0;
        while (str2[j] != '\0') {
            str1[i++] = str2[j++];
        }
        str1[i] = '\0';
        cout << "Concatenated String: " << str1 << endl;
    }

    void substringSearch(const char str[], const char sub[]) {
        for (int i = 0; str[i] != '\0'; i++) {
            int j = 0;
            while (sub[j] != '\0' && str[i + j] == sub[j]) {
                j++;
            }
            if (sub[j] == '\0') {
                cout << "Substring found." << endl;
                return;
            }
        }
        cout << "Substring not found." << endl;
    }
};

int main() {
    StringOperations strOps;
    char s1[50] = "Hello", s2[] = "World", s3[50];
    
    strOps.length(s1);
    strOps.copy(s1, s3);
    strOps.compare(s1, s3);
    strOps.concatenate(s1, s2);
    
    cout << "Enter substring to search: ";
    cin.ignore();
    cin.getline(s3, 50);
    strOps.substringSearch(s1, s3);
    
    return 0;
}

/*
Sample Output:
Length: 5
Copied String: Hello
Strings are equal.
Concatenated String: HelloWorld
Enter substring to search: ello
Substring found.
*/
```