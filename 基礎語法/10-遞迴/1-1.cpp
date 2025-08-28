#include <iostream>
using namespace std;
 
int get_Fibonacci_Sequence(int n)
{
    if(n == 0)
    {
        //詢問第零項時回答 0 
        return 0; 
        
    }
    else if(n == 1)
    {
        //詢問第一項時回答 1
        return 1; 
    }
    else
    {
        //詢問第 n 項時回答它前面兩項之和，但此時還不知道前面兩項，因此呼叫函數來詢問他們
        return get_Fibonacci_Sequence(n - 1)+ get_Fibonacci_Sequence(n - 2); 
    }
    
}

int main()
{
    cout << get_Fibonacci_Sequence(4) << endl; // 3
        
    cout << get_Fibonacci_Sequence(0) << endl; //0
    
    cout << get_Fibonacci_Sequence(13)<<endl;// 233
    
    cout << get_Fibonacci_Sequence(20)<<endl;// 6765
    
    return 0;
}


