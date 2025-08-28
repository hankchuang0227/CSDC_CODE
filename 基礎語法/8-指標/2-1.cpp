#include <iostream>

using namespace std;

int arr[5] = {10, 20, 30, 40, 50};
int main()
{
    int *ptr = &arr[0]; 
    //將ptr指向陣列的開頭
    
    cout << ptr << " : " << *ptr << endl; //印出 ptr指向的位置和該位置的內容，*ptr 為 10 與 ptr[0] 等同      
    ptr += 1; //將 ptr + 1 使 ptr 向前移動 4 Bytes 
    cout << ptr << " : " << *ptr << endl; //印出的 ptr的位置應與前者差 4，*ptr = 20 = ptr[1]
    ptr++; //將 ptr ++ 使 ptr 向前移動 4 Bytes 
    cout << ptr << " : " << *ptr << endl; //印出的 ptr的位置應與前者差 4，*ptr = 30 = ptr[2]
    ptr = ptr + 2; //將 ptr + 2 使 ptr向前移動 8 Bytes 
    cout << ptr << " : " << *ptr << endl; //印出的 ptr的位置應與前者差 8，*ptr = 50 = ptr[4]
  
    cout << (ptr - 4) << " : " << *(ptr - 4) << endl; 
    //印出的 ptr - 4的位置應與前者差 16，*(ptr-4) = 10 = ptr[0]    
    return 0;
}
