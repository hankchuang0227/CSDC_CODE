#include <iostream>
using namespace std;

int get_Fibonacci_Sequence(int n)
{
    int * sequence = new int[n + 1];
    sequence[0] = 0;
    sequence[1] = 1;
    for(int i = 2 ; i <= n ; i += 1)
    {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }
    
    int ans = sequence[n];
    
    delete[] sequence;
    sequence = nullptr;
    return ans;
}


int main()
{
  
    cout << get_Fibonacci_Sequence(0) << endl; // 0
    cout << get_Fibonacci_Sequence(2) << endl; // 1
    cout << get_Fibonacci_Sequence(4) << endl; // 3
    cout << get_Fibonacci_Sequence(10) << endl; // 55
    cout << get_Fibonacci_Sequence(40) << endl; // 102334155
    return 0;
}

