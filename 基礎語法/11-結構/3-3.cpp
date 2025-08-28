#include <iostream>
#include <algorithm>
using namespace std;

//列印 array : 
void print_arr(int arr[9])
{
    cout << arr[0];
    for(int i = 1; i < 9; i += 1)
    {
        cout << " , " << arr[i];
    }
    cout << endl;
}

//取中位數的作法為，用 sort 排序 array，然後回傳 array中央的值
int get_arr_median(int arr[9]) 
{
    sort(arr, arr + 9); //然而sort會改變 array 的長相成由小到大排序
  
    return arr[4];
}



int main()
{
    int numbers[] = {1,3,5,4,2,7,9,8,6};
  
    print_arr(numbers); // array 開頭的長相 : {1,3,5,4,2,7,9,8,6}
  
    cout << get_arr_median(numbers) <<endl;//取中位數
  
    print_arr(numbers); // array 取完中位數後的長相 : {1,2,3,4,5,6,7,8,9}
  
  
    return 0;
}


