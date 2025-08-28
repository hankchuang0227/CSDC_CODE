#include <iostream>
#include <algorithm> //為了使用 max
using namespace std;

int max_coin(int length, int arr[], int curr)
{
    if(curr >= length)
    {
        return 0;
    }
  
    //回傳 max( 這一棟的金幣數量 + 下兩棟開始能偷倒的最大金幣數量 , 下一棟能偷倒的最大金幣數量 )
    return max(arr[curr] + max_coin(length ,arr ,curr + 2) , max_coin(length ,arr ,curr + 1));
  
  
}


int main()
{
  
    cout << max_coin(5 , new int[]{1,2,3,4,5} , 0) << endl; 
    //得偷第 0,2,4 棟 得 9 個金幣
  
    cout << max_coin(5 , new int[]{5,2,2,5,2} , 0) << endl; 
    //得偷第 0,3 棟 得 10 個金幣
  
    cout << max_coin(7 , new int[]{3,2,3,5,2,4,6} , 0) << endl; 
    //得偷第 0,2,4,6棟 或 第0,3,6 棟 得 14 個金幣
  
    return 0;
}




