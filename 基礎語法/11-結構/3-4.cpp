#include <iostream>
#include <algorithm>
using namespace std;

//包著 array 的 struct
struct just_an_array 
{
    int a[9];
};


//列印 array : 
void print_arr(just_an_array arr)
{
    cout << arr.a[0];
    for(int i = 1; i < 9; i += 1)
    {
        cout << " , " << arr.a[i];
    }
    cout << endl;
}

//取中位數的作法為，用 sort 排序 array，然後回傳 array中央的值
int get_arr_median(just_an_array arr) 
{
    sort(arr.a, arr.a + 9); //排序不影響外面的 array 
  
    return arr.a[4];
}



int main()
{
    just_an_array numbers = { {1,3,5,4,2,7,9,8,6} };
  
    print_arr(numbers); // array 開頭的長相 : {1,3,5,4,2,7,9,8,6}
  
    cout << get_arr_median(numbers) <<endl;//取中位數
  
    print_arr(numbers); // array 取完中位數後的長相 : {1,3,5,4,2,7,9,8,6}
  
  
    return 0;
}



