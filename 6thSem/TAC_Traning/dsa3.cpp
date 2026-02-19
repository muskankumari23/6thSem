// print even index element of an array

#include <iostream>
using namespace std;

int main (){
    int  arr [] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }   
}

// print even index and even no element of an array

    int (int i =0; i<n; i++){
        for (int i)
    }

//print upercase of a string

   string str ="hello world";
    for(int i =0; i<str.length(); i++){
      if (str[i]>='a'&& str[i]<='z'){
        str[i] = str[i] - 'a' + 'A';
      }
    }