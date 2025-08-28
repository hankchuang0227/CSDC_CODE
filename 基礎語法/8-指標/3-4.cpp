#include <iostream>
using namespace std;

int arr[6] = {10, 20, 30, 40, 50, 60}; 
int main()
{
    int * ptr = arr;
    
    cout << ptr[3] << endl; //等同於 *(ptr + 3)
    cout << *(ptr + 3) << endl;
    
    cout << arr[2] << endl; //等同於 *(arr + 2)
    cout << *(arr + 2) << endl;
    
    
    
    cout << 4[ptr] << endl; //等同於 *(4 + ptr)、*(ptr + 4) 和 ptr[4]      
    cout << *(4 + ptr) << endl;
    cout << 1[arr] << endl; //等同於 *(1 + arr)、*(arr + 1) 和 arr[1]
    cout << *(1 + arr) << endl;
    return 0;
}

