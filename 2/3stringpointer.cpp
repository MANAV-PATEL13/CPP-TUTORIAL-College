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