#include <iostream>
using namespace std;

int arr[6] = {10, 20, 30, 40, 50, 60}; 
int main()
{
    int * ptr = arr; //等同於 int * ptr = &arr[0]
    
    cout << arr[1] << endl;
    cout << ptr[1] << endl;
    //印出相同的值
    
    cout << ptr[5] << endl; //與印出arr[5] 相同
    
    ptr[3] = -15; //改動ptr內的值，也會改到 arr內的值
    cout << arr[3] << endl;
    cout << ptr[3] << endl;
    
    arr[2] = 51; //改動 arr內的值，也會改動到 ptr內的值
    cout << ptr[2] << endl;
    
    
    return 0;
}
