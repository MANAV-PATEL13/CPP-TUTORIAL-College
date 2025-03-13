// Create a String class that includes all the string-related function like length, copy, compare,
// concatenation, sub string search (without using inbuilt string functions).

#include <iostream>
using namespace std;

class String
{
public:
          void length(char x[])
          {
                    int length = 0;
                    for (int i = 0; x[i] != '\0'; i++, length++){}
                    cout << "Length of s1 is " << length << endl;
          }

          void copy(char x[], char y[])
          {
                    int i = 0;
                    for (i = 0; x[i] != '\0'; i++){
                              y[i] = x[i];
                    }
                    y[i++] = '\0';
                    cout << "copy string s1 into s3, print s3: " << y << endl;
          }

          void compare(char x[], char y[])
          {
                    int i = 0;
                    while (x[i] == y[i] && x[i] != '\0' && y[i] != '\0'){
                              i++;
                    }
                    if (x[i] == y[i])                    {
                              cout << "s1 and s3 are equal" << endl;
                    }
                    else                    {
                              cout << "s1 and s3 are not equal" << endl;
                    }
          }

          void concatenate(char x[], char y[]){
                    
                    int i = 0, j;
                    for (i = 0, j = 0; x[i] != '\0'; i++, j++){
                              x[i] = x[i];
                    }
                    x[i++] = ' ';
                    for (j = 0; y[j] != '\0'; i++, j++){
                              x[i] = y[j];
                    }
                    x[i++] = '\0';
                    cout << "Concatenate string s1 and s2: " << x << endl;
          }

          void sub_string(char x[], char y[]){
                    
                    int i, j;    
                    for (i = 0; x[i] != '\0'; i++) {  // Loop through main string
                        j = 0;
                
                        while (y[j] != '\0' && x[i + j] == y[j]) {  
                            j++;  // Check next character
                        }
                
                        if (y[j] == '\0') {  // If full substring matched
                            cout << "Substring found " << endl;
                            return;  // Stop checking after first match
                        }
                    }
                
                    cout << "Substring not found" << endl;

          }

};

int main()
{
          // length
          // copy
          // compare
          // concatenate
          String obj;
          char s1[] = "Hello", s2[] = "World", s3[20];
          obj.length(s1);
          obj.copy(s1, s3);
          obj.compare(s1, s3);         
          obj.concatenate(s1, s2);
          cin.getline(s3, 20);
          obj.sub_string(s1,s3);

          return 0;
}

/*

Length of s1 is 5
copy string s1 into s3, print s3: Hello
s1 and s3 are equal
Concatenate string s1 and s2: Hello World
ello
Substring found 

*/