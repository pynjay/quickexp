#include <iostream>
#include <chrono>
using namespace std;

int main() {

    int a, b;

    cout << "a: " << endl;
    cin >> a;
    cout << endl;
    cout << "b: " << endl;
    cin >> b;
    cout << endl;

    /// a to the power of b, O(logn(n)) complexity
    int c = a;
    int d = b;

    int k = 1;

    while(b!=0){
        if(b % 2 == 0){
            c = c * c;
            b = b / 2;
        } else {
            k = c * k;
            b = b - 1;
        }
    }

    cout << k << endl;
   

}