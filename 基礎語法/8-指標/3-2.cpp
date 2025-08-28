#include <iostream>
using namespace std;

int arr[6] = {10, 20, 30, 40, 50, 60}; 
int main()
{
    int * ptr = arr; //等同於 int * ptr = &arr[0]
    
    cout << ptr << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    //印出相同的位址
    
    cout << *ptr << endl;
    cout << *arr << endl;
    cout << arr[0] << endl;
    //印出相同的值
    
    return 0;
}

