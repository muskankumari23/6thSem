// dsa2.cpp — combined small demos: table, remove digits, print # after letters

#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1) pattern: multiplication table for 2
    int n = 10;
    for (int i = 1; i <= n; ++i) {
        cout << "2*" << i << " = " << 2 * i << endl;
    }

    cout << endl;

    // 2) remove digits from a string (demonstration)
    string s = "hello world 123345";
    string noDigits;
    for (char c : s) {
        if (!(c >= '0' && c <= '9')) noDigits.push_back(c);
    }
    cout << "without digits: " << noDigits << endl;

    cout << endl;

    // 3) print a '#' after every character in a string
    string str = "hello world";
    for (int i = 0; i < str.length(); ++i) {
        cout << str[i] << "#";
    }
    cout << endl;

    return 0;
}