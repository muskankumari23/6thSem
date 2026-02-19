// print 1 to n squre

// #include <iostream>
// using namespace std;

// int main(){
//     int n=10;
//     for (int i = 1; i <= n; i++) {
//         cout << i * i << " ";


//     }
// }
 
// sum of squre each number from 1 to n

#include <iostream>
using namespace std;

int main(){
    int n=10;
    int sum=0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
        sum = sum + i * i;
    }
    cout << "Sum of squares from 1 to " << n << " is: " << sum << endl;
}