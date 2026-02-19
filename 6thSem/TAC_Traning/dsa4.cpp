#include <iostream>
using namespace std;    
int main() {
    int n = 10;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
// string str = "hello world";
//     for (int i = 0; i < str.length(); ++i) {
//         cout << str[i] << "#";
//     }
//     cout << endl;

//     return 0;
}

// # bw alternate character of a string2


    string str = "hello world";
    for(int i = 0; i < str.length(); i++) {
        if (i % 2 == 0) {

            cout << str[i] << " "; 

        }
    }

    