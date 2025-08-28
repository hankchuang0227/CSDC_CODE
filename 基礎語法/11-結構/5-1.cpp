#include <iostream>
using namespace std;

struct a_int_and_a_bool
{
    bool b;
    int i;
};
    

int main()
{
    a_int_and_a_bool test;
    cout <<sizeof(test.i)+sizeof(test.b) << endl; // 5
    cout << sizeof(test) << endl; // 8

    return 0;
}

