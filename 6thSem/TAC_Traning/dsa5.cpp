// without nasted loop print reverse pattern 1 to 5  54321 4321 321 21 1


#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    // print x where even character of a string
    string str = "hello world";
    for(int i = 0; i < str.length(); ++i) {
        if (i % 2 == 0) {
            cout << "x";
        } else { 
            cout << str[i];
        }
    }
    cout << endl;

    return 0;
}