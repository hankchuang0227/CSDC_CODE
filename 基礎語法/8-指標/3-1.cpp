#include <iostream>
using namespace std;

int arr[5] = {10, 20, 30, 40, 50};

int main()
{
    int * ptr = &arr[0]; //將指標指向 arr[0]
    cout << arr << endl; //印出 arr，應得到 arr 在記憶體中開頭的位址      
    cout << &arr[0] << endl; //印出 arr[0]的位址，同上
    cout << &arr << endl; //印出 &arr，得到 arr 在記憶體中開頭的位址，與上面相同      
    cout << ptr << endl << endl; //印出 ptr，也就是 arr[0] 的位址，同上    
    cout << *arr << endl; //印出 arr指向位址的值
    cout << arr[0] << endl; //印出arr[0]，同上
    cout << *ptr << endl << endl; //印出 ptr 指向位址的值，為 arr[0]    
    //雖然 arr看起來像是 pointer，但他們並不一樣

    //以下例子中sizeof(arr)與 sizeof(ptr)會拿到不同的值 :  

    cout << sizeof(arr) << endl; //印出 arr 的在記憶體中的長度，arr有 5個 int故為 20    
    cout << sizeof(ptr) << endl << endl; //印出 ptr 在記憶體中的長度，因為ptr為一指標，長度應為 8
    return 0;
}
