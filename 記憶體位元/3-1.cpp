#include <iostream>
using namespace std;
 
int main { 
    int a = 12;
    int b = 10;
 
    cout << (a & b) << ‘\n’;
    cout << (a | b) << ‘\n’;
    cout << (a ^ b) << ‘\n’;
    cout << (~a) << ‘\n’;
    cout << (a << 1) << ‘\n’;
    cout << (a >> 1) << ‘\n’;
    return 0;
}